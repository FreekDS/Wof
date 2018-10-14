#ifndef TESTING_PLAYER_H
#define TESTING_PLAYER_H

#include "Entity.h"

class Player : public Entity{
private:
    int m_playerNum;
public:
    Player(int m_playerNum);
    void update(sf::RenderWindow* window) override;
};


#endif //TESTING_PLAYER_H
