#include "Score.h"

void Score::incrementScore() {
    m_value++;
}

void Score::update() {
    setString("Score: " + std::to_string(m_value));
}

Score::Score(sf::Font& font, unsigned int size) : sf::Text("Score: 0", font, size) {
    m_value = 0;
}
