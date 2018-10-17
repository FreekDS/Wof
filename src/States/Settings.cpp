#include "Settings.h"
#include "MainMenu.h"

void Settings::update(sf::RenderWindow *window) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)){
//        gameQuit = true;
        coreState.setState(new MainMenu());
    }
}

void Settings::render(sf::RenderWindow *window) {
    window->draw(*m_title);
}

Settings::~Settings() {
    delete m_font;
    delete m_title;
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

}
