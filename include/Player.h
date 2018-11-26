#ifndef TESTING_PLAYER_H
#define TESTING_PLAYER_H

#include "Entity.h"
#include <SFML/Audio.hpp>

class Player : public Entity{
private:
    int m_playerNum;
//#ifdef UNIX
    sf::SoundBuffer* m_bark;
    sf::SoundBuffer* m_airhorne;
    sf::Sound* m_barkSound;
    sf::Sound* m_airhorneSound;
//#endif
public:
    Player(int m_playerNum);
    void update(sf::RenderWindow* window) override;
    void bark();

    virtual ~Player();
};


#endif //TESTING_PLAYER_H
