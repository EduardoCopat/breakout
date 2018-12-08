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
    reset();

    this->velocityX = 5;
    this->velocityY = -5;
    defineCollisionBox();
}

void Ball::reset() {
    x = windowWidth / 2;
    y = windowHeight - 55;
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
    if(y == 0){
        x = originalX;
        y = originalY;
        velocityY *= -1;
    }

    if(y == windowHeight){
        throw 1;
    }

    defineCollisionBox();

    for(Collider* collider : colliders) {
        if(collider->collides(collisionBox)){
            x = originalX;
            y = originalY;

            velocityY *= -1;
            y += velocityY;
        }
    }



}

void Ball::addCollider(Collider* collider) {
    this->colliders.push_back(collider);
}

void Ball::defineCollisionBox() {
    this->collisionBox.x = x-radius;
    this->collisionBox.y = y-radius;
    this->collisionBox.w = radius*2;
    this->collisionBox.h = radius*2;
}

void Ball::setRender(SDL_Renderer *renderer) {
    this->renderer = renderer;
}
