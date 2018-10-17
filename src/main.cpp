#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>

#include "GameState.h"
#include "MainMenu.h"

#include "Settings.h"

using namespace std;

GameState coreState = GameState();
bool gameQuit = false;


void init(sf::RenderWindow&, sf::Sprite&, sf::Texture&);
void initBackground(sf::RenderWindow&, sf::Sprite&, sf::Texture&);
void initIcon(sf::RenderWindow&);


int main() {
    sf::Clock clk;
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), ">>>>>Wof Pong<<<<<", sf::Style::Fullscreen);
    sf::Texture bgTexture;
    sf::Sprite bgSprite;

    srand(time(NULL));

    init(window, bgSprite, bgTexture);

    coreState.setWindow(&window);
//    coreState.setState(new Settings());
    coreState.setState(new MainMenu());

    while (window.isOpen())
    {
        window.clear();
        window.draw(bgSprite);
        coreState.update();
        coreState.render();
        window.display();


        if(gameQuit)
            window.close();

        sf::sleep(sf::milliseconds(5));
    }
    cout << "Ran for " << clk.getElapsedTime().asMilliseconds() << "ms" << endl;
    cout << clk.getElapsedTime().asSeconds() << "s" << endl;
    return 0;
}

void initBackground(sf::RenderWindow& window, sf::Sprite& sprite, sf::Texture& texture){
    texture.loadFromFile("./res/background.png");
    sf::Vector2u textureSize;
    sf::Vector2u windowSize;
    textureSize = texture.getSize();
    windowSize = window.getSize();
    float scaleX = (float) windowSize.x / textureSize.x;
    float scaleY = (float) windowSize.y / textureSize.y;
    sprite.setTexture(texture, true);
    sprite.setScale(scaleX, scaleY);
}

void initIcon(sf::RenderWindow& window){
    sf::Image icon;
    icon.loadFromFile("./res/icon.png");
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}

void init(sf::RenderWindow& window, sf::Sprite& bgSprite, sf::Texture& bgTexture){
    window.setMouseCursorVisible(false);
    initIcon(window);
    initBackground(window, bgSprite, bgTexture);
}