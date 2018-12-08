#ifndef BREAKOUT_COLLIDER_H
#define BREAKOUT_COLLIDER_H


#include <SDL_rect.h>

class Collider{
public:
    void setBox(SDL_Rect rect);

    bool collides(SDL_Rect rect);

    bool hasCollided();
    void disable();

private:
    SDL_Rect rect = {0,0,0,0};
    bool collided = false;
    bool disabled = false;
};


#endif //BREAKOUT_COLLIDER_H
