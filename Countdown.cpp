#include "Countdown.h"
#include <iostream>

Countdown::Countdown(sf::Font &font, unsigned int size, unsigned int time) : sf::Text(std::to_string(time), font, size) {
    m_time = time;
    setFillColor(sf::Color::Green);
}

void Countdown::update() {
    if(!isFinished()){
        sf::sleep(sf::seconds(1));
        m_time--;
        updateColor();
        setString(std::to_string(m_time));
    }
}

Countdown::~Countdown() {
}

bool Countdown::isFinished() {
    return m_time == 0;
}

void Countdown::setTime(unsigned int time) {
    m_time = time;
    updateColor();
    setString(std::to_string(time));
}

void Countdown::updateColor() {
    if(m_time > 2)
        setFillColor(sf::Color::Green);
    else
        setFillColor(sf::Color::Red);
}
