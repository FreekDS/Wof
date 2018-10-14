#ifndef TESTING_ENTITY_H
#define TESTING_ENTITY_H

#include <SFML/Graphics.hpp>
#include <string>

class Entity : public sf::Sprite{
private:
    sf::Texture* m_texture;
protected:
    sf::Vector2f m_velocity;
public:
    Entity();
    ~Entity() override;
    void load(std::string filename);
    virtual void update(sf::RenderWindow* window);
    bool checkCollision(Entity* other);
};


#endif //TESTING_ENTITY_H
