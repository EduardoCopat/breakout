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
    this->x = windowWidth / 2 - barWidth / 2;
    this->y = windowHeight - 50;
    this->velocityX = 0;
}

void PlayerBar::render() {
    SDL_Rect fillRect = {x , y , barWidth, barHeight };
    SDL_SetRenderDrawColor( renderer, 0xC0, 0xC0, 0xC0, 0xC0 );
    SDL_RenderFillRect( renderer, &fillRect );
}

void PlayerBar::move() {
    //Move the dot left or right
    this->x += velocityX;

    //If the dot went too far to the left or right
    if( ( x < 0 ) || ( x + barWidth > windowWidth ) )
    {
        //Move back
        x -= velocityX;
    }
}

void PlayerBar::handleEvent(SDL_Event event) {
    //If a key was pressed
    if( event.type == SDL_KEYDOWN && event.key.repeat == 0 )
    {
        //Adjust the velocity
        switch( event.key.keysym.sym )
        {
            case SDLK_LEFT: velocityX -= SPEED; break;
            case SDLK_RIGHT: velocityX += SPEED; break;
        }
    }
    //If a key was released
    else if( event.type == SDL_KEYUP && event.key.repeat == 0 )
    {
        //Adjust the velocity
        switch( event.key.keysym.sym )
        {
            case SDLK_LEFT: velocityX += SPEED; break;
            case SDLK_RIGHT: velocityX -= SPEED; break;
        }
    }
}
