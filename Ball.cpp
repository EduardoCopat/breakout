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
    this->velocityX = 5;
    this->velocityY = 5;
}

void Ball::render() {
    this->texture->render( x-radius, y-radius );
}

void Ball::setTexture(Texture *texture) {
    this->texture = texture;
}

void Ball::move() {
    int originalX = x;
    int originalY = y;
    x += velocityX;
    y -= velocityY;

    if(x == windowWidth || x == 0){
        x = originalX;
        y = originalY;
        velocityX *= -1;
    }
    if(y == windowHeight || y == 0){
        x = originalX;
        y = originalY;
        velocityY *= -1;
    }

}
