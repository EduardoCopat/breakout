//
// Created by Copat on 12/1/2018.
//

#ifndef BREAKOUT_PLAYERBAR_H
#define BREAKOUT_PLAYERBAR_H


#include <SDL_render.h>
#include <SDL_events.h>

class PlayerBar {
public:
    PlayerBar(SDL_Renderer* renderer, int windowWidth, int windowHeight);
    void render();

    void handleEvent(SDL_Event event);

    void move();

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
};


#endif //BREAKOUT_PLAYERBAR_H
