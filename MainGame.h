#ifndef TESTING_MAINGAME_H
#define TESTING_MAINGAME_H

#include "GameState.h"
#include "Entity.h"
#include "Ball.h"
#include "Score.h"

class MainGame : public TinyState  {
private:
    Player* m_player1;
    Player* m_player2;
    Ball* m_ball;
public:
    void initialize(sf::RenderWindow *window) override;
    void update(sf::RenderWindow *window) override;
    void render(sf::RenderWindow *window) override;
    void destroy(sf::RenderWindow *window) override;
    ~MainGame();
};


#endif //TESTING_MAINGAME_H
