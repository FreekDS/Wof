#ifndef TESTING_SETTINGS_H
#define TESTING_SETTINGS_H

#include "GameState.h"
#include <SFML/Graphics.hpp>

class Settings : public TinyState{
private:
    sf::Font* m_font;
    sf::Text* m_title;
public:
    void initialize(sf::RenderWindow *window) override;
    void update(sf::RenderWindow *window) override;
    void render(sf::RenderWindow *window) override;
    void destroy(sf::RenderWindow *window) override;
    ~Settings();
};


#endif //TESTING_SETTINGS_H
