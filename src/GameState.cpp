#include "GameState.h"


void TinyState::initialize(sf::RenderWindow *window) {

}

void TinyState::update(sf::RenderWindow *window) {

}

void TinyState::render(sf::RenderWindow *window) {

}

void TinyState::destroy(sf::RenderWindow* window) {

}
TinyState::~TinyState(){

}

GameState::GameState(){
    m_window = nullptr;
    m_state = nullptr;
}

bool GameState::hasValidState() {
    return m_state != nullptr;
}

void GameState::setState(TinyState *state) {
    if(hasValidState())
        m_state->destroy(m_window);
    m_state = state;
    if(hasValidState())
        m_state->initialize(m_window);
}

void GameState::setWindow(sf::RenderWindow* window) {
    m_window = window;
}

void GameState::update() {
    if(hasValidState())
        m_state->update(m_window);
}

void GameState::render() {
    if(hasValidState())
        m_state->render(m_window);
}

GameState::~GameState() {
    if(hasValidState())
        m_state->destroy(m_window);
}

