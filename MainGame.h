#ifndef TESTING_MAINGAME_H
#define TESTING_MAINGAME_H

#include "GameState.h"
#include "Entity.h"
#include "Ball.h"
#include "Score.h"
#include "Countdown.h"

class MainGame : public TinyState  {
private:
    Player* m_player1;
    Player* m_player2;
    Ball* m_ball;
    Score* m_score1;
    Score* m_score2;
    sf::Font* m_font;
    Countdown* m_startCountdown;
public:
    void initialize(sf::RenderWindow *window) override;
    void update(sf::RenderWindow *window) override;
    void render(sf::RenderWindow *window) override;
    void destroy(sf::RenderWindow *window) override;
    ~MainGame();
};


#endif //TESTING_MAINGAME_H
