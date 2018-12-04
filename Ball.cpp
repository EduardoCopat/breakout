#include "Ball.h"

struct Circle
{
    int x, y;
    int r;
};

Ball::Ball(int windowWidth, int windowHeight) {
    this->windowWidth = windowWidth;
    this->windowHeight = windowHeight;
    this->radius = 5;
    this->x = windowWidth / 2;
    this->y = windowHeight - 55;
    this->velocityX = 0;
}

void Ball::render() {
    this->texture->render( x-radius, y-radius );
}

void Ball::setTexture(Texture *texture) {
    this->texture = texture;
}
