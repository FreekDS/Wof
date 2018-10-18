#ifndef TESTING_GAMESTATE_H
#define TESTING_GAMESTATE_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class TinyState{
public:
    virtual void initialize(sf::RenderWindow* window);
    virtual void update(sf::RenderWindow* window);
    virtual void render(sf::RenderWindow* window);
    virtual void destroy(sf::RenderWindow* window);
    ~TinyState();
};

class GameState{
private:
    TinyState* m_state;
    sf::RenderWindow* m_window;
    bool hasValidState();
public:
    GameState();
    void setWindow(sf::RenderWindow* window);
    void setState(TinyState* state);

    virtual void update();

    virtual void render();

    virtual ~GameState();
};

extern GameState coreState;
extern sf::SoundBuffer sBuffer;
extern bool gameQuit;
extern int gameMode;

#endif //TESTING_GAMESTATE_H
