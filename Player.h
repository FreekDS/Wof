#ifndef TESTING_PLAYER_H
#define TESTING_PLAYER_H

#include "Entity.h"
//#include <SFML/Audio.hpp>

class Player : public Entity{
private:
    int m_playerNum;
   // sf::SoundBuffer* m_bark;
    //sf::Sound* m_sound;
public:
    Player(int m_playerNum);
    void update(sf::RenderWindow* window) override;
    //void bark();
};


#endif //TESTING_PLAYER_H
