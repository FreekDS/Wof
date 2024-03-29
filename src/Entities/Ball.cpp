#include "Ball.h"
#include <iostream>
#include <cmath>
#include "CollisionManager.h"


void Ball::update(sf::RenderWindow *window) {

    bool madeCollision = false;
    if(m_velocity.x > 10.0f)
        m_velocity.x = 7.0f;
    if(m_velocity.y > 10.0f)
        m_velocity.y = 7.0f;

    if(checkCollision(m_player1) || checkCollision(m_player2)){
//    if(Collision::PixelPerfectTest(*m_player1, *this) || Collision::PixelPerfectTest(*m_player2, *this)){
        m_player1->bark();
        madeCollision = true;
        updateSpeeds();
        m_velocity.x *= -1.2;
        m_velocity.y *= 1.1524;
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
        initSpeed();
        setPosition(window->getSize().x /2.0f, window->getSize().y /2.0f);
        m_countdown->setTime(3);
    }
    if(getPosition().x > window->getSize().x){
        m_score1->incrementScore();
        initSpeed();
        setPosition(window->getSize().x /2.0f, window->getSize().y /2.0f);
        m_countdown->setTime(3);
    }



    Entity::update(window);
}

Ball::Ball(Player* player1, Player* player2, Score* scorePlayer1, Score* scorePlayer2, Countdown* countdown, int spriteNum) {
    m_player1 = player1;
    m_player2 = player2;
    initSpeed();
    m_timesCollided = 0;
    m_score1 = scorePlayer1;
    m_score2 = scorePlayer2;
    m_countdown = countdown;
    this->load("projectile" + std::to_string(spriteNum) + ".png");

    scale(0.3, 0.3);
    setOrigin(getLocalBounds().width/2, getLocalBounds().height/2);
}

void Ball::setSpeed(float newSpeed) {
    m_speed = newSpeed;
}

void Ball::updateSpeeds() {
    m_timesCollided++;
    if(m_rotSpeed < 10)
        m_rotSpeed *= 1.2f;
}

void Ball::initSpeed() {
    int ran = rand() % 2;
    int ran2 = rand() % 2;
    if(ran == 0){
        m_velocity.x = 1.0f;
        m_rotSpeed = 1.0f;
    } else{
        m_velocity.x = -1.0f;
        m_rotSpeed = -1.0f;
    }
    if(ran2 == 0) {
        m_velocity.y = 1.0f;
    } else {
        m_velocity.y = -1.0f;
    }
}

Ball::~Ball() {
}
