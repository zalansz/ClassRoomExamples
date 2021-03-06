#include "Entity.hpp"
#include <cmath>

Entity::Entity(int x, int y):x(x),y(y) {}

double Entity::distance(const Entity& other) const {
    return sqrt((x-other.x)*(x-other.x)+(y-other.y)*(y-other.y));
}

bool Entity::isPosition(int x, int y) const {
    return x==(this->x) && y==(this->y);
}
