
#include <iostream>
#include "Selector.h"


void Selector::update(sf::RenderWindow* window) {

    m_preview->setPosition(window->getSize().x - 4 * m_preview->getGlobalBounds().width,
                           getPosition().y - 1 * getGlobalBounds().height);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && !m_leftKey && m_enable) {
        m_selected--;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && !m_rightKey && m_enable) {
        m_selected++;
    }

    if (m_selected < 0) {
        m_selected = m_max;
    }
    if (m_selected > m_max) {
        m_selected = 0;
    }
    setString(m_text + ": " + std::to_string(m_selected + 1));

    if (m_selected != m_previousSelected && m_selected <= m_max&&!m_imageName.empty()) {
        m_texture->loadFromFile("./res/" + m_imageName + std::to_string(m_selected) + ".png");
        m_previousSelected = m_selected;
    }

    m_rightKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && m_enable;
    m_leftKey = sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && m_enable;

}

int Selector::getSelectedInt() {
    return m_selected;
}

Selector::Selector(std::string string, const sf::Font &font, unsigned int characterSize, std::string imageName, unsigned int max) : Text(string + ": 1", font,
                                                                                                      characterSize) {
    m_selected = 0;
    m_enable = false;
    m_previousSelected = -1;
    m_max = max-1;
    m_imageName = imageName;
    m_leftKey = false;
    m_rightKey = false;
    m_text = string;
    m_texture = new sf::Texture();
    if(!imageName.empty()) {
        m_texture->loadFromFile("./res/" + imageName + "0.png");
    }
    m_texture->setSmooth(true);
    m_preview = new sf::Sprite();
    m_preview->setTexture(*m_texture);
    m_preview->scale(0.4, 0.4);
    m_preview->setOrigin(m_preview->getGlobalBounds().width/2.0f, 0);
}

Selector::~Selector() {
    delete m_preview;
    delete m_texture;
}

void Selector::render(sf::RenderWindow *window) {
    window->draw(*this);
    window->draw(*m_preview);
}

void Selector::enable() {
    m_enable = true;
}

void Selector::disable() {
    m_enable = false;
}

void Selector::setSelected(int m_selected) {
    Selector::m_selected = m_selected;
}
