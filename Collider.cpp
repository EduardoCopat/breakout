//
// Created by Copat on 12/6/2018.
//

#include "Collider.h"

void Collider::setCoordinates(int x, int y) {
    rect->x = x;
    rect->y = y;
}


void Collider::setSize(int w, int h) {
    rect->w = w;
    rect->h = h;
}

