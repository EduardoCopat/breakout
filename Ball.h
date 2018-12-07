#ifndef BREAKOUT_BALL_H
#define BREAKOUT_BALL_H


#include <SDL_render.h>
#include "Texture.h"
#include "Collider.h"
#include <vector>

class Ball {
public:
    Ball(int windowWidth, int windowHeight);

    void render();

    void setTexture(Texture *texture);

    void move();

    void addCollider(Collider *collider);

private:
    SDL_Renderer *renderer;
    int windowWidth;
    int windowHeight;
    int radius;
    int barHeight;
    static const int SPEED = 10;
    int velocityX;
    int velocityY;
    int x;
    int y;
    Texture *texture;
    std::vector<Collider*> colliders = {};

    void defineCollisionBox();

    SDL_Rect collisionBox = {0,0,0,0};
};


#endif //BREAKOUT_BALL_H
