//
// Created by Copat on 12/4/2018.
//

#ifndef BREAKOUT_TEXTURELOADER_H
#define BREAKOUT_TEXTURELOADER_H

#include <string>
#include <SDL_types.h>
#include <SDL_rect.h>
#include <SDL_render.h>

class Texture {
public:
    Texture(SDL_Renderer *renderer);

    ~Texture();

    //Loads image at specified path
    bool loadFromFile(std::string path);

    //Deallocates texture
    void free();

    //Set color modulation
    void setColor(Uint8 red, Uint8 green, Uint8 blue);

    //Renders texture at given point
    void render(int x, int y, SDL_Rect *clip = NULL, double angle = 0.0, SDL_Point *center = NULL,
                SDL_RendererFlip flip = SDL_FLIP_NONE);

    //Gets image dimensions
    int getWidth();

    int getHeight();

private:
    //The actual hardware texture
    SDL_Texture *mTexture;

    //Image dimensions
    int mWidth;
    int mHeight;
    SDL_Renderer *renderer;
};


#endif //BREAKOUT_TEXTURELOADER_H
