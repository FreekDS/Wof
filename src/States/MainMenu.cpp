#include "MainMenu.h"
#include "MainGame.h"
#include "Settings.h"
#include <iostream>

using namespace std;

void MainMenu::initialize(sf::RenderWindow *window) {
    // Font
    m_font = new sf::Font();
    m_font->loadFromFile("./res/font.ttf");

    // Text Elements
    m_title = new sf::Text(" Wof", *m_font, 128U);
    sf::FloatRect textRect = m_title->getLocalBounds();
    m_title->setOrigin(textRect.left + textRect.width/2.0f,
                   textRect.top  + textRect.height/2.0f);
    m_title->setPosition(window->getSize().x /2.0f, m_title->getLocalBounds().height);

    m_play = new sf::Text("Play", *m_font, 64U);
    sf::FloatRect textRect2 = m_play->getLocalBounds();
    m_play->setOrigin(textRect2.left + textRect2.width/2.0f,
            textRect2.top  + textRect2.height/2.0f);
    m_play->setPosition(window->getSize().x /2.0f, window->getSize().y /1.5f);

    m_settings = new sf::Text("Settings", *m_font, 64U);
    sf::FloatRect textRect3 = m_settings->getLocalBounds();
    m_settings->setOrigin(textRect3.left + textRect3.width/2.0f,
            textRect3.top + textRect3.height/2.0f);
    m_settings->setPosition(window->getSize().x/2.0f, m_play->getPosition().y + m_settings->getLocalBounds().height + 2);

    m_quit = new sf::Text("Quit", *m_font, 64U);
    sf::FloatRect textRect4 = m_quit->getLocalBounds();
    m_quit->setOrigin(textRect4.left + textRect4.width/2.0f,
            textRect4.top  + textRect4.height/2.0f);
    m_quit->setPosition(window->getSize().x /2.0f, m_settings->getPosition().y + m_play->getLocalBounds().height + 2);

    //rave code
    m_rave = new sf::Text("RAVE MODE", *m_font, 128U);
    sf::FloatRect textRect5 = m_rave->getLocalBounds();
    m_rave->setOrigin(textRect5.left + textRect5.width/2.0f,
                       textRect5.top  + textRect5.height/2.0f);
    m_rave->setPosition(window->getSize().x /2.0f, m_rave->getLocalBounds().height+128);


    // Doggies
    tx.loadFromFile("./res/icon.png");
    sp.setTexture(tx, true);

    //origins and postion chanegd so the can rotate around middle
    sp.setOrigin(sp.getTexture()->getSize().x/2,sp.getTexture()->getSize().y/2);
    sp.setPosition(sp.getPosition().x+sp.getTexture()->getSize().x/2, sp.getPosition().y+sp.getTexture()->getSize().y/2 );

    sp.setColor(sf::Color(255, 255, 255, 128));
    sp2 = sp;
    sp2.scale(-1,1);
    sp2.setPosition(window->getSize().x-sp.getTexture()->getSize().x/2, sp.getPosition().y);
    sp3 = sp;
    sp4 = sp2;
    sp3.setPosition(sp3.getPosition().x, window->getSize().y - tx.getSize().y/2);
    sp4.setPosition(sp4.getPosition().x, window->getSize().y - tx.getSize().y/2);
    m_selected = 0;
    m_selectedColor = sf::Color::White;


    m_upKey = false;
    m_enterKey = false;
}

void MainMenu::update(sf::RenderWindow *window) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !m_upKey) {
        m_selected--;
        m_upKey = false;
        cout << m_selected << endl;
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && !m_downKey){
        m_selected++;
        m_downKey = false;
        cout << m_selected << endl;
    }

    if(m_selected < 0)
        m_selected = 2;
    if(m_selected > 2)
        m_selected = 0;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return) && !m_enterKey){
        switch (m_selected){
            case 0:
                coreState.setState(new MainGame());
                break;
            case 1:
                coreState.setState(new Settings());
                break;
            case 2:
                gameQuit = true;
            default:
                break;
        }
        m_enterKey = false;
    }

    //rave code
//    sp.rotate(10U);
//    sp2.rotate(10U);
//    sp3.rotate(10U);
//    sp4.rotate(10U);
    sp.rotate(1U);
    sp2.rotate(1U);
    sp3.rotate(1U);
    sp4.rotate(1U);
    sp.setColor(sf::Color(sp.getColor().r+1,sp.getColor().g+2,sp.getColor().b+3));
    sp2.setColor(sf::Color(sp.getColor().r+1,sp.getColor().g+2,sp.getColor().b+3));
    sp3.setColor(sf::Color(sp.getColor().r+1,sp.getColor().g+2,sp.getColor().b+3));
    sp4.setColor(sf::Color(sp.getColor().r+1,sp.getColor().g+2,sp.getColor().b+3));
    m_rave->setColor(sf::Color(m_rave->getColor().r+0.5,m_rave->getColor().g+.7,m_rave->getColor().b+.4));

    // Without these booleans, the switch/if statements would run more than one time
    m_enterKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Enter);
    m_upKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
    m_downKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
}

void MainMenu::render(sf::RenderWindow *window) {

    m_play->setFillColor(sf::Color::Black);
    m_quit->setFillColor(sf::Color::Black);
    m_settings->setFillColor(sf::Color::Black);

    switch (m_selected){
        case 0:
            m_play->setFillColor(m_selectedColor);
            break;
        case 1:
            m_settings->setFillColor(m_selectedColor);
            break;
        case 2:
            m_quit->setFillColor(m_selectedColor);
        default:
            break;
    }

    window->draw(*m_title);
    window->draw(*m_play);
    window->draw(*m_settings);
    window->draw(*m_quit);

    //rave code
    window->draw(*m_rave);

    window->draw(sp);
    window->draw(sp2);
    window->draw(sp3);
    window->draw(sp4);
}

void MainMenu::destroy(sf::RenderWindow *window) {
    delete m_font;
    delete m_title;
    delete m_play;
    delete m_settings;
    delete m_quit;

    //rave code
    delete m_rave;
}

MainMenu::~MainMenu(){
    destroy(nullptr);
}
