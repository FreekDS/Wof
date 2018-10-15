#include "CollisionManager.h"
#include <cmath>

bool collision::circleRect(Entity *circle, Entity *rect) {
    float circleDistanceX = fabsf(circle->getPosition().x - rect->getPosition().x);
    float circleDistanceY = fabsf(circle->getPosition().y - rect->getPosition().y);

    float radius = (circle->getGlobalBounds().width + circle->getGlobalBounds().height) /4.0f;

    if(circleDistanceX > (rect->getGlobalBounds().width/2 + radius))
        return false;
    if(circleDistanceY > (rect->getGlobalBounds().height/2 + radius))
        return false;
    double cornerDistance_sq = pow((circleDistanceX - rect->getGlobalBounds().width/2), 2) +
                               pow((circleDistanceY - rect->getGlobalBounds().height/2), 2);
    return cornerDistance_sq <= pow(radius, 2);
}
//
//bool Entity::checkCollision(Entity *circle, Entity *rect) {
//    float circleDistanceX = fabsf(circle->getPosition().x - rect->getPosition().x);
//    float circleDistanceY = fabsf(circle->getPosition().y - rect->getPosition().y);
//
//    if(circleDistanceX > (rect->getGlobalBounds().width/2 + circle->getRadius()))
//        return false;
//    if(circleDistanceY > (rect->getGlobalBounds().height/2 + circle->getRadius()))
//        return false;
//
//    double cornerDistance_sq = pow((circleDistanceX - rect->getGlobalBounds().width/2), 2) +
//                               pow((circleDistanceY - rect->getGlobalBounds().height/2), 2);
//
//    return cornerDistance_sq <= pow(circle->getRadius(), 2);
//}