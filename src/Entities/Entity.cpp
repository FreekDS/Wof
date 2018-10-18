#include "Entity.h"
#include <cmath>
#include <Entity.h>


Entity::Entity() {
    m_texture = new sf::Texture();
}

void Entity::load(std::string filename) {
    m_texture->loadFromFile("./res/" + filename);
    setTexture(*m_texture);
}

Entity::~Entity() {
    delete m_texture;
}

void Entity::update(sf::RenderWindow* window) {
    move(m_velocity);
}

bool Entity::checkCollision(Entity *other) {
    return this->getGlobalBounds().intersects(other->getGlobalBounds());
}


