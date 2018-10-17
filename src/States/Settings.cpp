#include "Settings.h"
#include "MainMenu.h"

void Settings::update(sf::RenderWindow *window) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)){
        gameQuit = true;
        //coreState.setState(new MainMenu());
    }
    m_selPlayer1->update(window);
    m_selPlayer2->update(window);
}

void Settings::render(sf::RenderWindow *window) {
    window->draw(*m_title);
    m_selPlayer1->render(window);
    m_selPlayer2->render(window);
}

Settings::~Settings() {
    delete m_font;
    delete m_title;
    delete m_selPlayer1;
    delete m_selPlayer2;
    delete m_selProjectile;
}

void Settings::destroy(sf::RenderWindow *window) {
}

void Settings::initialize(sf::RenderWindow *window) {
    m_font = new sf::Font();
    m_font->loadFromFile("./res/font.ttf");

    m_title = new sf::Text("Settings", *m_font, 128U);
    sf::FloatRect textRect = m_title->getLocalBounds();
    m_title->setOrigin(textRect.left + textRect.width/2.0f,
                       textRect.top  + textRect.height/2.0f);
    m_title->setPosition(window->getSize().x /2.0f, m_title->getLocalBounds().height);

    m_selPlayer1 = new Selector("Player one's dog", *m_font, 64U, "player", 2);
    m_selPlayer1->setPosition(m_selPlayer1->getPosition().x,
            window->getSize().y / 2.0f - 5*m_selPlayer1->getGlobalBounds().height);
    m_selPlayer1->enable();

    m_selPlayer2 = new Selector("Player two's dog", *m_font, 64U, "player", 2);
    m_selPlayer2->setPosition(m_selPlayer2->getPosition().x,
                              window->getSize().y / 2.0f + m_selPlayer2->getGlobalBounds().height/2.0f);

    m_selProjectile = new Selector("Projectile", *m_font, 64U, "projectile", 1);


}
