//
// Created by Copat on 12/1/2018.
//

#ifndef BREAKOUT_PLAYERBAR_H
#define BREAKOUT_PLAYERBAR_H


#include <SDL_render.h>
#include <SDL_events.h>
#include "Collider.h"

class PlayerBar {
public:
    PlayerBar(SDL_Renderer* renderer, int windowWidth, int windowHeight);
    void render();

    void handleEvent(SDL_Event event);

    void move();

    Collider* getCollider();

private:
    SDL_Renderer *renderer;
    int windowWidth;
    int windowHeight;
    int barWidth;
    int barHeight;
    static const int SPEED = 10;
    int velocityX;
    int x;
    int y;
    Collider collider;

    void defineCollisionBox();

    SDL_Rect collisionBox = {0,0,0,0};
};


#endif //BREAKOUT_PLAYERBAR_H
