#include "Ball.h"
#include <iostream>
#include <cmath>

void Ball::update(sf::RenderWindow *window) {
    bool madeCollision = false;
    if(checkCollision(m_player1) || checkCollision(m_player2)){
        madeCollision = true;
        updateSpeeds();
        m_velocity.x *= -1.2;
    }
    if(getPosition().y < 0 || getPosition().y > window->getSize().y) {
        madeCollision = true;
        m_velocity.y *= -1.01;
    }
    if(!madeCollision){
        if(m_velocity.x < 0)
            rotate(m_rotSpeed);
        else
            rotate(-m_rotSpeed);
    }

    if(getPosition().x < 0){
        m_score2->incrementScore();
        m_velocity.x = 1.0f;
        m_velocity.y = 1.0f;
        m_rotSpeed = 1.0f;
        setPosition(window->getSize().x /2.0f, window->getSize().y /2.0f);
    }
    if(getPosition().x > window->getSize().x){
        m_score1->incrementScore();
        m_velocity.x = 1.0f;
        m_velocity.y = 1.0f;
        m_rotSpeed = 1.0f;
        setPosition(window->getSize().x /2.0f, window->getSize().y /2.0f);
    }

    Entity::update(window);
}

Ball::Ball(Player* player1, Player* player2, Score* scorePlayer1, Score* scorePlayer2) {
    m_player1 = player1;
    m_player2 = player2;
    m_velocity.x = 1.0f;
    m_velocity.y = 1.0f;
    m_rotSpeed = 1.0f;
    m_timesCollided = 0;
    m_score1 = scorePlayer1;
    m_score2 = scorePlayer2;
    load("spelding.png");
    scale(0.1, 0.1);
    setOrigin(getLocalBounds().width/2, getLocalBounds().height/2);
}

void Ball::setSpeed(float newSpeed) {
    m_speed = newSpeed;
}

void Ball::updateSpeeds() {
    m_timesCollided++;
    m_rotSpeed *= 1.2f;
}
