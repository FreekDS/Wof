#ifndef TESTING_TESTSTATE_H
#define TESTING_TESTSTATE_H

#include "GameState.h"

class MainMenu : public TinyState  {
private:
    sf::Font* m_font;
    sf::Text* m_title;
    sf::Text* m_play;
    sf::Text* m_quit;

    sf::Texture tx;
    sf::Sprite sp, sp2, sp3, sp4;

    int m_selected;

    sf::Color m_selectedColor;

    bool m_upKey, m_downKey;
public:
    void initialize(sf::RenderWindow *window) override;
    void update(sf::RenderWindow *window) override;
    void render(sf::RenderWindow *window) override;
    void destroy(sf::RenderWindow *window) override;
    ~MainMenu();
};


#endif //TESTING_TESTSTATE_H
