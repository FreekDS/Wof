#ifndef TESTING_SCORE_H
#define TESTING_SCORE_H

#include <SFML/Graphics.hpp>

class Score: public sf::Text {
private:
    int m_value;
public:
    Score(sf::Font& font, unsigned int size);
    void incrementScore();
    void update();
};


#endif //TESTING_SCORE_H
