//
// Created by Copat on 12/8/2018.
//

#include "Brick.h"

Brick::Brick(int x, int y) {
    this->x = x;
    this->y = y;

    defineCollisionBox();
}

void Brick::setRender(SDL_Renderer *renderer) {
    this->renderer = renderer;
}

void Brick::defineCollisionBox() {
    this->collisionBox.x = x;
    this->collisionBox.y = y;
    this->collisionBox.w = WIDTH;
    this->collisionBox.h = HEIGHT;
    this->collider.setBox(collisionBox);
}

Collider *Brick::getCollider() {
    return &collider;
}

void Brick::render() {
    if(collider.hasCollided()){
        collider.disable();
        return;
    }
    SDL_Rect fillRect = {x , y , WIDTH, HEIGHT };
    SDL_SetRenderDrawColor( renderer, 255, 0, 0, 255 );
    SDL_RenderFillRect( renderer, &fillRect );
}
