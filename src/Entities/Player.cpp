#include <iostream>
#include "Player.h"

void Player::update(sf::RenderWindow* window) {
    double x = getPosition().x;
    if(x < window->getSize().x / 2.0f)
        m_velocity.y = sf::Keyboard::isKeyPressed(sf::Keyboard::S) - sf::Keyboard::isKeyPressed(sf::Keyboard::Z) * 1.2f;
    else
        m_velocity.y = sf::Keyboard::isKeyPressed(sf::Keyboard::Down) - sf::Keyboard::isKeyPressed(sf::Keyboard::Up) * 1.2f;

    Entity::update(window);
    if(getPosition().y < 0)
        move(0, 1.0f);
    if(getPosition().y + this->getGlobalBounds().height > window->getSize().y)
        move(0, -1.0f);
}

Player::Player(int m_playerNum) : m_playerNum(m_playerNum) {
    std::cout << "player num: " << std::to_string(m_playerNum) << std::endl;
    std::string filename = "player" + std::to_string(m_playerNum) + ".png";
    this->load(filename);

#ifdef UNIX
    m_bark = new sf::SoundBuffer();
    m_bark->loadFromFile("./res/dog0.wav");
    m_sound = new sf::Sound();
    m_sound->setBuffer(*m_bark);
#endif

    scale(0.5f, 0.5f);
}

void Player::bark() {
#ifdef UNIX
    m_sound->play();
#endif
}

Player::~Player() {
#ifdef UNIX
    m_sound->play();
#endif
}


