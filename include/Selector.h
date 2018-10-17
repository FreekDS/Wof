#ifndef TESTING_DOGSELECTOR_H
#define TESTING_DOGSELECTOR_H


#include <SFML/Graphics.hpp>

class Selector: public sf::Text {
private:
    int m_selected;
public:
    void update();
};


#endif //TESTING_DOGSELECTOR_H
