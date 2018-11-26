
#include <Settings.h>
#include <iostream>

#include "Settings.h"
#include "MainMenu.h"
#include "ini.h"


void Settings::update(sf::RenderWindow *window) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)){
//        gameQuit = true;

         writeConfig();
        coreState.setState(new MainMenu());
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !m_upKey) {
        m_selected--;
        m_upKey = false;
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && !m_downKey){
        m_selected++;
        m_downKey = false;
    }

    if(m_selected < 0)
        m_selected = 3;
    if(m_selected > 3)
        m_selected = 0;

    switch (m_selected){
        case 0:
            m_selPlayer1->enable();
            m_selPlayer2->disable();
            m_selProjectile->disable();
            m_selMode->disable();
            break;
        case 1:
            m_selPlayer1->disable();
            m_selPlayer2->enable();
            m_selProjectile->disable();
            m_selMode->disable();
            break;
        case 2:
            m_selPlayer1->disable();
            m_selPlayer2->disable();
            m_selProjectile->enable();
            m_selMode->disable();
            break;
        case  3:
            m_selPlayer1->disable();
            m_selPlayer2->disable();
            m_selProjectile->disable();
            m_selMode->enable();
        default:
            break;
    }


    // Without these booleans, the switch/if statements would run more than one time
    m_upKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
    m_downKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);

    m_selPlayer1->update(window);
    m_selPlayer2->update(window);
    m_selProjectile->update(window);
    m_selMode->update(window);

    ::gameMode=m_selMode->getSelectedInt();
}

void Settings::render(sf::RenderWindow *window) {
    window->draw(*m_title);

    m_selPlayer1->setFillColor(sf::Color::Black);
    m_selPlayer2->setFillColor(sf::Color::Black);
    m_selProjectile->setFillColor(sf::Color::Black);
    m_selMode->setFillColor(sf::Color::Black);

    switch (m_selected){
        default:
            break;
        case 0:
            m_selPlayer1->setFillColor(sf::Color::White);
            break;
        case 1:
            m_selPlayer2->setFillColor(sf::Color::White);
            break;
        case 2:
            m_selProjectile->setFillColor(sf::Color::White);
            break;
        case 3:
            m_selMode->setFillColor(sf::Color::White);
            break;
    }

    m_selPlayer1->render(window);
    m_selPlayer2->render(window);
    m_selProjectile->render(window);
    m_selMode->render(window);
}

Settings::~Settings() {
    delete m_font;
    delete m_title;
    delete m_selPlayer1;
    delete m_selPlayer2;
    delete m_selProjectile;
    delete m_selMode;
}

void Settings::destroy(sf::RenderWindow *window) {
}

void Settings::initialize(sf::RenderWindow *window) {
    //rave music

    int maxPlayer, maxProjectile,maxMode;

    readConfig(maxPlayer, maxProjectile,maxMode);
    m_font = new sf::Font();
    m_font->loadFromFile("./res/font.ttf");

    m_title = new sf::Text("Settings", *m_font, 128U);
    sf::FloatRect textRect = m_title->getLocalBounds();
    m_title->setOrigin(textRect.left + textRect.width/2.0f,
                       textRect.top  + textRect.height/2.0f);
    m_title->setPosition(window->getSize().x /2.0f, m_title->getLocalBounds().height);

    m_selPlayer1 = new Selector("Player one's dog", *m_font, 64U, "player", maxPlayer);
    m_selPlayer1->setPosition(m_selPlayer1->getPosition().x,
            window->getSize().y / 2.0f - 5*m_selPlayer1->getGlobalBounds().height);
    m_selPlayer1->enable();

    m_selPlayer2 = new Selector("Player two's dog", *m_font, 64U, "player", static_cast<unsigned int>(maxPlayer));
    m_selPlayer2->setPosition(m_selPlayer2->getPosition().x,
                              m_selPlayer1->getPosition().y + 3 * m_selPlayer2->getGlobalBounds().height);

    m_selProjectile = new Selector("Projectile", *m_font, 64U, "projectile", static_cast<unsigned int>(maxProjectile));
    m_selProjectile->setPosition(m_selProjectile->getPosition().x,
                                 m_selPlayer2->getPosition().y + 3.5f * m_selProjectile->getGlobalBounds().height);

    m_selMode = new Selector("Mode", *m_font, 64U, "", static_cast<unsigned int>(maxMode));
    m_selMode->setPosition(m_selProjectile->getPosition().x,
                                 m_selProjectile->getPosition().y + 3.5f * m_selMode->getGlobalBounds().height);

    m_selected = 0;
    m_upKey = false;
    m_downKey = false;
    readCurrentSettings();
}

void Settings::writeConfig() {
    //File instance
    mINI::INIFile file("./cfg/cfg.ini");
    mINI::INIStructure ini;
    file.read(ini);
    ini["Settings"]["player1"] = std::to_string(m_selPlayer1->getSelectedInt());
    ini["Settings"]["player2"] = std::to_string(m_selPlayer2->getSelectedInt());
    ini["Settings"]["projectile"] = std::to_string(m_selProjectile->getSelectedInt());
    ini["settings"]["current_Mode"]= std::to_string(m_selMode->getSelectedInt());
    file.write(ini);
}

void Settings::readConfig(int &maxPlayer, int& maxProjectile,int& maxMode) {
    mINI::INIFile file("./cfg/cfg.ini");
    mINI::INIStructure ini;
    file.read(ini);
    maxPlayer = std::stoi(ini.get("Settings").get("num_of_player_sprites"));
    maxProjectile = std::stoi(ini.get("Settings").get("num_of_projectile_sprites"));
    maxMode=std::stoi(ini.get("Settings").get("num_of_modes"));
}

void Settings::readCurrentSettings(){
    mINI::INIFile file("./cfg/cfg.ini");
    mINI::INIStructure ini;
    file.read(ini);
    m_selMode->setSelected(std::stoi(ini.get("Settings").get("current_Mode")));
    m_selProjectile->setSelected(std::stoi(ini.get("Settings").get("projectile")));
    m_selPlayer1->setSelected(std::stoi(ini.get("Settings").get("player1")));
    m_selPlayer2->setSelected(std::stoi(ini.get("Settings").get("player2")));
}

int readMode(){
    mINI::INIFile file("./cfg/cfg.ini");
    mINI::INIStructure ini;
    file.read(ini);
    return std::stoi(ini.get("Settings").get("current_mode"));

}

