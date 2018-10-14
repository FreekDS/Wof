#include "Player.h"

void Player::update(sf::RenderWindow* window) {
    switch (m_playerNum){
        case 0:
            m_velocity.y = sf::Keyboard::isKeyPressed(sf::Keyboard::S) - sf::Keyboard::isKeyPressed(sf::Keyboard::Z);
            break;
        default:
            m_velocity.y = sf::Keyboard::isKeyPressed(sf::Keyboard::Down) - sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
            break;
    }
    Entity::update(window);
    if(getPosition().y < 0)
        move(0, 1.0f);
    if(getPosition().y + this->getGlobalBounds().height > window->getSize().y)
        move(0, -1.0f);
}

Player::Player(int m_playerNum) : m_playerNum(m_playerNum) {
    switch (m_playerNum){
        case 0:
            this->load("player.png");
            break;
        default:
            this->load("player2.png");
            break;
    }
    scale(0.5f, 0.5f);
}
