#include <cstdio>
#include "Collider.h"

bool Collider::collides(SDL_Rect other) {
    if(this->disabled == true)
        return false;
    //The sides of the rectangles
    int leftA, leftB;
    int rightA, rightB;
    int topA, topB;
    int bottomA, bottomB;

    //Calculate the sides of rect A
    leftA = this->rect.x;
    rightA = this->rect.x + this->rect.w;
    topA = this->rect.y;
    bottomA = this->rect.y + this->rect.h;

    //Calculate the sides of rect B
    leftB = other.x;
    rightB = other.x + other.w;
    topB = other.y;
    bottomB = other.y + other.h;

    //If any of the sides from A are outside of B
    if( bottomA <= topB )
    {
        return false;
    }

    if( topA >= bottomB )
    {
        return false;
    }

    if( rightA <= leftB )
    {
        return false;
    }

    if( leftA >= rightB )
    {
        return false;
    }

    //If none of the sides from A are outside B
    this->collided = true;
    return true;


}

void Collider::setBox(SDL_Rect box) {
    this->rect.x = box.x;
    this->rect.y = box.y;
    this->rect.w = box.w;
    this->rect.h = box.h;
}

bool Collider::hasCollided() {
    return this->collided;
}

void Collider::disable(){
    this->disabled = true;
}


