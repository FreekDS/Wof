#include "MainGame.h"
#include "MainMenu.h"
#include "Player.h"
#include "ini.h"
#include <iostream>
#include <MainGame.h>

void MainGame::initialize(sf::RenderWindow *window) {

    m_font = new sf::Font();
    m_font->loadFromFile("./res/font.ttf");

    readSettings();

    m_startCountdown = new Countdown(*m_font, 200U, 5);
    m_startCountdown->setOrigin(m_startCountdown->getGlobalBounds().width/2, m_startCountdown->getGlobalBounds().height/2);
    m_startCountdown->setPosition(static_cast<float>(window->getSize().x / 2.0),
                                  static_cast<float>(window->getSize().y / 2.0 - m_startCountdown->getGlobalBounds().height/2));

    m_player1 = new Player(m_player1Num);
    m_player2 = new Player(m_player2Num);
    m_player1->setPosition(m_player1->getPosition().x,
            window->getSize().y /2.0f);
    m_player2->setPosition(window->getSize().x,
            window->getSize().y /2.0f);
    m_player2->scale(-1, 1);

    m_score1 = new Score(*m_font, 16U);
    m_score2 = new Score(*m_font, 16U);

    m_score2->setPosition(window->getSize().x - m_score2->getGlobalBounds().width - 1/100.0f * window->getSize().x, 0);

    m_ball = new Ball(m_player1, m_player2, m_score1, m_score2, m_startCountdown, m_projectileNum);
    m_ball->setPosition(window->getSize().x /2.0f, window->getSize().y/2.0f);

}

void MainGame::update(sf::RenderWindow *window) {

    //rave code
    if(gameMode==1) {
        m_ball->setColor(sf::Color(m_ball->getColor().r + 1, m_ball->getColor().g + 3, m_ball->getColor().b + 2));
        m_player1->setColor(
                sf::Color(m_player1->getColor().r + 3, m_player1->getColor().g, m_player1->getColor().b + 1));
        m_player2->setColor(
                sf::Color(m_player2->getColor().r + 1, m_player2->getColor().g + 3, m_player2->getColor().b));
    }

    if(m_startCountdown->isFinished()) {
        m_ball->update(window);
        m_player1->update(window);
        m_player2->update(window);
        m_score1->update();
        m_score2->update();
    }else{
        m_startCountdown->update();
    }
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
    if(!m_startCountdown->isFinished())
        window->draw(*m_startCountdown);
}

void MainGame::destroy(sf::RenderWindow *window) {
    delete m_player1;
    delete m_player2;
    delete m_ball;
    delete m_score1;
    delete m_score2;
    delete m_font;
}

MainGame::~MainGame() {
    delete m_player1;
    delete m_player2;
    delete m_ball;
    delete m_score1;
    delete m_score2;
    delete m_font;
    delete m_startCountdown;
}

void MainGame::readSettings()
{
    mINI::INIFile file("./cfg/cfg.ini");
    mINI::INIStructure ini;
    file.read(ini);
    m_player1Num = std::stoi(ini.get("Settings").get("player1"));
    m_player2Num = std::stoi(ini.get("Settings").get("player2"));
    m_projectileNum = std::stoi(ini.get("Settings").get("projectile"));
}
