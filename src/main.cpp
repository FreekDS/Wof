#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <random>

#include "GameState.h"
#include "MainMenu.h"

#include "Settings.h"

using namespace std;

GameState coreState = GameState();
bool gameQuit = false;
int gameMode=readMode();


void init(sf::RenderWindow&, sf::Sprite&, sf::Texture&);
void initBackground(sf::RenderWindow&, sf::Sprite&, sf::Texture&);
void initIcon(sf::RenderWindow&);


int main() {
    sf::SoundBuffer buffer;
    //music
    sf::SoundBuffer raveSound;
    sf::Sound sound;
    sound.setVolume(10);
    raveSound.loadFromFile("res/sounds/Rave.wav");
    sound.setBuffer(raveSound);
    sound.setLoop(true);

    sf::Clock clk;
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), ">>>>>Wof Pong<<<<<", sf::Style::Fullscreen);
    sf::Texture bgTexture;
    sf::Sprite bgSprite;
    gameMode = readMode();

    srand(static_cast<unsigned int>(time(nullptr)));

    init(window, bgSprite, bgTexture);

    coreState.setWindow(&window);
//    coreState.setState(new Settings());
    coreState.setState(new MainMenu());

    while (window.isOpen())
    {
        window.clear();
        window.draw(bgSprite);
        if(gameMode==1){
            srand(static_cast<unsigned int>(time(nullptr)));
            bgSprite.setColor(sf::Color(static_cast<sf::Uint8>(bgSprite.getColor().r + rand() % 3),
                                        static_cast<sf::Uint8>(bgSprite.getColor().r + rand() % 3),
                                        static_cast<sf::Uint8>(bgSprite.getColor().b + rand() % 3)));
            if (sound.getStatus() != sf::Sound::Playing) {
                sound.play();
            }
        }else if(bgSprite.getColor().r!=255&&bgSprite.getColor().b!=255&&bgSprite.getColor().g!=255) {
            bgSprite.setColor(sf::Color(255, 255, 255));
        }

        if(gameMode==0) {
            if (sound.getStatus() == sf::Sound::Playing) {
                sound.stop();
            }
        }
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