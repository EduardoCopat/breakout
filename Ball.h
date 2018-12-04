#ifndef BREAKOUT_BALL_H
#define BREAKOUT_BALL_H


#include <SDL_render.h>
#include "Texture.h"

class Ball {
public:
    Ball(int windowWidth, int windowHeight);

    void render();

    void setTexture(Texture *texture);

    void move();

private:
    SDL_Renderer *renderer;
    int windowWidth;
    int windowHeight;
    int radius;
    int barHeight;
    static const int SPEED = 10;
    int velocityX;
    int x;
    int y;
    Texture *texture;
};


#endif //BREAKOUT_BALL_H
