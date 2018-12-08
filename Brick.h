//
// Created by Copat on 12/8/2018.
//

#ifndef BREAKOUT_BRICK_H
#define BREAKOUT_BRICK_H


#include <SDL_render.h>
#include "Collider.h"

class Brick {
public:
    Brick(int x, int y);

    void render();

    void setRender(SDL_Renderer* renderer);

    Collider* getCollider();

private:
    void defineCollisionBox();

    SDL_Rect collisionBox = {0,0,0,0};
    int x;
    int y;
    int WIDTH = 50;
    int HEIGHT = 10;
    SDL_Renderer *renderer;
    Collider collider;
};


#endif //BREAKOUT_BRICK_H
