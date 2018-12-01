//
// Created by Copat on 12/1/2018.
//

#include "PlayerBar.h"

PlayerBar::PlayerBar(SDL_Renderer *renderer, int windowWidth, int windowHeight) {
    this->renderer = renderer;
    this->windowWidth = windowWidth;
    this->windowHeight = windowHeight;
    this->barWidth = 100;
    this->barHeight = 10;
}

void PlayerBar::render() {
    SDL_Rect fillRect = { windowWidth / 2 - barWidth / 2, windowHeight - 100, barWidth, barHeight };
    SDL_SetRenderDrawColor( renderer, 0xC0, 0xC0, 0xC0, 0xC0 );
    SDL_RenderFillRect( renderer, &fillRect );
}
