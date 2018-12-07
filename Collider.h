#ifndef BREAKOUT_COLLIDER_H
#define BREAKOUT_COLLIDER_H


#include <SDL_rect.h>

class Collider{
public:
    void setBox(SDL_Rect rect);

    bool collides(SDL_Rect rect);

private:
    SDL_Rect rect = {0,0,0,0};
};


#endif //BREAKOUT_COLLIDER_H
