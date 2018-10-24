#ifndef TESTING_BALL_H
#define TESTING_BALL_H

#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Player.h"
#include "Score.h"
#include "Countdown.h"

class Ball: public Entity {
public:
    Ball(Player* player1, Player* player2, Score* scorePlayer1, Score* scorePlayer2, Countdown* countdown, int spriteNum = 0);
    void update(sf::RenderWindow *window) override;
    void setSpeed(float newSpeed);
    void initSpeed();

    ~Ball() override;

private:
    Player* m_player1;
    Player* m_player2;
    float m_speed;
    float m_rotSpeed;
    Score* m_score1;
    Score* m_score2;
    int m_timesCollided;
    void updateSpeeds();
    Countdown* m_countdown;
};


#endif //TESTING_BALL_H
