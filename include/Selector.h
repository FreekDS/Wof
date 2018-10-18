#ifndef TESTING_DOGSELECTOR_H
#define TESTING_DOGSELECTOR_H


#include <SFML/Graphics.hpp>

class Selector: public sf::Text {
private:
    int m_selected;
    int m_previousSelected;
    int m_max;

    std::string m_imageName;
    sf::Texture* m_texture;
    sf::Sprite* m_preview;

    bool m_leftKey;
    bool m_rightKey;
    bool m_enable;

    std::string m_text;
public:
    void update(sf::RenderWindow* window);
    void render(sf::RenderWindow* window);
    void enable();
    void disable();
    int getSelectedInt();
    virtual ~Selector();
    Selector(std::string string, const sf::Font &font, unsigned int characterSize, std::string imageName, unsigned int max);

    void setSelected(int m_selected);
};


#endif //TESTING_DOGSELECTOR_H
