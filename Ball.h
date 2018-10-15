#ifndef TESTING_BALL_H
#define TESTING_BALL_H

#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Player.h"
#include "Score.h"

class Ball: public Entity {
public:
    Ball(Player* player1, Player* player2, Score* scorePlayer1, Score* scorePlayer2);
    void update(sf::RenderWindow *window) override;
    void setSpeed(float newSpeed);
private:
    Player* m_player1;
    Player* m_player2;
    float m_speed;
    float m_rotSpeed;
    Score* m_score1;
    Score* m_score2;
    int m_timesCollided;
    void updateSpeeds();
};


#endif //TESTING_BALL_H
