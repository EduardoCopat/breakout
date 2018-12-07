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
    this->velocityY = -5;
    defineCollisionBox();
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
    y += velocityY;

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

    for(Collider* collider : colliders) {
        if(collider->collides(collisionBox)){
            x = originalX;
            y = originalY;
            velocityX *= -1;
            velocityY *= -1;
            y += velocityY;
        }
    }
    defineCollisionBox();

}

void Ball::addCollider(Collider* collider) {
    this->colliders.push_back(collider);
}

void Ball::defineCollisionBox() {
    this->collisionBox.x = x-radius;
    this->collisionBox.y = y-radius;
    this->collisionBox.w = radius*2+1;
    this->collisionBox.h = radius*2+1;
}
