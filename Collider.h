//
// Created by Copat on 12/6/2018.
//

#ifndef BREAKOUT_COLLIDER_H
#define BREAKOUT_COLLIDER_H


#include <SDL_rect.h>

class Collider{
public:
    void setCoordinates(int x, int y);
    void setSize(int w, int h);
private:
    SDL_Rect *rect = {};
};


#endif //BREAKOUT_COLLIDER_H
