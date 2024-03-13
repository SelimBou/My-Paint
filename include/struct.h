/*
** EPITECH PROJECT, 2023
** struct.h
** File description:
** a header file that contains prototype of
** all the functions
*/

#include <stdio.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include "my.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct button_s {
    sfImage *image;
    sfRectangleShape *rect;
    sfTexture* texture;
    sfSprite* sprite;
    sfVector2f pos;
    sfColor buttoncol;
} button_t;

typedef struct params {
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfRenderTexture *canvas;
    sfCircleShape *brush;
    sfFont* font;
    sfColor color;
    sfEvent event;
    sfMusic *music;
} params_t;

typedef struct image {
    sfTexture *texture;
    sfSprite *sprite;
    sfImage *image;
    sfText* text;
    sfColor buttoncol;
    sfVector2f scale;
    sfVector2f position;
    sfIntRect rect;
} image_t;

typedef struct global {
    params_t settings;
    image_t *pics;
    button_t *button;
    bool eraser_selected;
} global_t;

#endif
