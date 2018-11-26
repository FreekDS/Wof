#ifndef TESTING_SETTINGS_H
#define TESTING_SETTINGS_H

#include "GameState.h"
#include "Selector.h"
#include <SFML/Graphics.hpp>

class Settings : public TinyState{
private:
    sf::Font* m_font;
    sf::Text* m_title;

    Selector* m_selPlayer1;
    Selector* m_selPlayer2;
    Selector* m_selProjectile;
    Selector* m_selMode;



    int m_selected;

    bool m_upKey, m_downKey;
    void readConfig(int& maxPlayer, int& maxProjectile, int& maxMode);
    void readCurrentSettings();
    void writeConfig();
public:
    void initialize(sf::RenderWindow *window) override;
    void update(sf::RenderWindow *window) override;
    void render(sf::RenderWindow *window) override;
    void destroy(sf::RenderWindow *window) override;
    ~Settings();
};

extern int readMode();


#endif //TESTING_SETTINGS_H
