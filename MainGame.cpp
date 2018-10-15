#include "MainGame.h"
#include "MainMenu.h"
#include "Player.h"


void MainGame::initialize(sf::RenderWindow *window) {
    m_font = new sf::Font();
    m_font->loadFromFile("./res/font.ttf");

    m_player1 = new Player(0);
    m_player2 = new Player(1);
    m_player1->setPosition(m_player1->getPosition().x,
            window->getSize().y /2.0f + m_player2->getGlobalBounds().height/2);
    m_player2->setPosition(window->getSize().x - m_player2->getGlobalBounds().width,
            window->getSize().y /2.0f + m_player2->getGlobalBounds().height/2);

    m_score1 = new Score(*m_font, 16U);
    m_score2 = new Score(*m_font, 16U);

    m_score2->setPosition(window->getSize().x - m_score2->getGlobalBounds().width, 0);

    m_ball = new Ball(m_player1, m_player2, m_score1, m_score2);
    m_ball->setPosition(window->getSize().x /2.0f, window->getSize().y/2.0f);


}

void MainGame::update(sf::RenderWindow *window) {
    m_ball->update(window);
    m_player1->update(window);
    m_player2->update(window);
    m_score1->update();
    m_score2->update();
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)){
        coreState.setState(new MainMenu());
    }

}

void MainGame::render(sf::RenderWindow *window) {
    window->draw(*m_ball);
    window->draw(*m_player1);
    window->draw(*m_player2);
    window->draw(*m_score1);
    window->draw(*m_score2);
}

void MainGame::destroy(sf::RenderWindow *window) {

}

MainGame::~MainGame() {
    delete m_player1;
    delete m_player2;
    delete m_ball;
    delete m_score1;
    delete m_score2;
    delete m_font;
}
