//
// Created by Copat on 12/1/2018.
//

#ifndef BREAKOUT_PLAYERBAR_H
#define BREAKOUT_PLAYERBAR_H


#include <SDL_render.h>

class PlayerBar {
public:
    PlayerBar(SDL_Renderer* renderer, int windowWidth, int windowHeight);
    void render();
private:
    SDL_Renderer *renderer;
    int windowWidth;
    int windowHeight;
    int barWidth;
    int barHeight;
};


#endif //BREAKOUT_PLAYERBAR_H
