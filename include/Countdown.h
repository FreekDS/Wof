#ifndef TESTING_COUNTDOWN_H
#define TESTING_COUNTDOWN_H

#include <SFML/Graphics.hpp>

class Countdown : public sf::Text{
private:
    bool m_finished;
    unsigned int m_time;
    void updateColor();
public:
    Countdown(sf::Font& font, unsigned int size, unsigned int time);
    void setTime(unsigned int time);
    void update();
    bool isFinished();
    virtual ~Countdown();
};


#endif //TESTING_COUNTDOWN_H
