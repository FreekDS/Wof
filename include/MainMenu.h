#ifndef TESTING_TESTSTATE_H
#define TESTING_TESTSTATE_H

#include "GameState.h"

class MainMenu : public TinyState  {
private:
    //Text Elements
    sf::Font* m_font = nullptr;
    sf::Text* m_title = nullptr;
    sf::Text* m_play = nullptr;
    sf::Text* m_settings = nullptr;
    sf::Text* m_quit = nullptr;

    //rave code
    sf::Text* m_rave = nullptr;

    //UI elements (dogs)
    sf::Texture tx;
    sf::Sprite sp, sp2, sp3, sp4;

    //Selection members
    int m_selected;
    sf::Color m_selectedColor;

    //Keys
    bool m_upKey, m_downKey, m_enterKey;


public:
    void initialize(sf::RenderWindow *window) override;
    void update(sf::RenderWindow *window) override;
    void render(sf::RenderWindow *window) override;
    void destroy(sf::RenderWindow *window) override;
    ~MainMenu();
};


#endif //TESTING_TESTSTATE_H
