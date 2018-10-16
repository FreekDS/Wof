#include "MainMenu.h"
#include "MainGame.h"
#include <iostream>

using namespace std;

void MainMenu::initialize(sf::RenderWindow *window) {
    // Texts
    cout << "Initialized MainMenu" << endl;
    m_font = new sf::Font();
    m_font->loadFromFile("./res/font.ttf");

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

    m_quit = new sf::Text("Quit", *m_font, 64U);
    sf::FloatRect textRect3 = m_quit->getLocalBounds();
    m_quit->setOrigin(textRect3.left + textRect3.width/2.0f,
                       textRect3.top  + textRect3.height/2.0f);
    m_quit->setPosition(window->getSize().x /2.0f, m_play->getPosition().y + m_quit->getLocalBounds().height + 5);

    // Doggies
    tx.loadFromFile("./res/icon.png");
    sp.setTexture(tx, true);
    sp.setPosition(sp.getPosition().x, sp.getPosition().y + 5);
    sp.setColor(sf::Color(255, 255, 255, 128));
    sp2 = sp;
    sp2.scale(-1,1);
    sp2.setPosition(window->getSize().x, sp.getPosition().y + 5);
    sp3 = sp;
    sp4 = sp2;
    sp3.setPosition(sp3.getPosition().x, window->getSize().y - tx.getSize().y);
    sp4.setPosition(sp4.getPosition().x, window->getSize().y - tx.getSize().y);

    m_selected = 0;
    m_selectedColor = sf::Color::White;

    m_downKey = false;
    m_upKey = false;
}

void MainMenu::update(sf::RenderWindow *window) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !m_upKey) {
        m_selected++;
        m_upKey = false;
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && !m_downKey){
        m_selected--;
        m_downKey = false;
    }

    if(m_selected < 0)
        m_selected = 1;
    if(m_selected > 1)
        m_selected = 0;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
        switch (m_selected){
            case 0:
                coreState.setState(new MainGame());
                break;
            case 1:
                gameQuit = true;
            default:
                break;
        }
    }

    m_upKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
    m_downKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
}

void MainMenu::render(sf::RenderWindow *window) {

    m_play->setFillColor(sf::Color::Black);
    m_quit->setFillColor(sf::Color::Black);

    switch (m_selected){
        case 0:
            m_play->setFillColor(m_selectedColor);
            break;
        case 1:
            m_quit->setFillColor(m_selectedColor);
            break;
        default:
            m_selected = 0;
            break;
    }

    window->draw(*m_title);
    window->draw(*m_play);
    window->draw(*m_quit);
    window->draw(sp);
    window->draw(sp2);
    window->draw(sp3);
    window->draw(sp4);
}

void MainMenu::destroy(sf::RenderWindow *window) {
    delete m_font;
    delete m_title;
    delete m_quit;
    delete m_play;
}

MainMenu::~MainMenu(){
}
