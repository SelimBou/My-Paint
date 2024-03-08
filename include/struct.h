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
#include <SFML/Window.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct params {
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfEvent event;
    sfMusic *music;
} params_t;

typedef struct image {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    sfVector2f position;
    sfIntRect rect;
    sfClock *clock;
    float xVelocity;
} image_t;

typedef struct global {
    params_t settings;
    image_t *pics;
} global_t;

#endif
