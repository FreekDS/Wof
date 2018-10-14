#include "Ball.h"
#include <iostream>

void Ball::update(sf::RenderWindow *window) {
    bool madeCollision = false;
    if(checkCollision(m_player1) || checkCollision(m_player2)){
        madeCollision = true;
        m_velocity.x *= -1.2;
    }
    if(getPosition().y < 0 || getPosition().y > window->getSize().y) {
        madeCollision = true;
        m_velocity.y *= -1.01;
    }
    if(!madeCollision){
        if(m_velocity.x < 0)
            rotate(1);
        else
            rotate(-1);
    }

    Entity::update(window);
}

Ball::Ball(Player* player1, Player* player2) {
    m_player1 = player1;
    m_player2 = player2;
    m_velocity.x = 1.0f;
    m_velocity.y = 1.0f;
    load("spelding.png");
    scale(0.1, 0.1);
    setOrigin(getLocalBounds().width/2, getLocalBounds().height/2);
}
