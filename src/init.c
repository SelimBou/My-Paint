/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** initiate sprites
*/

#include <stdio.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include "../include/my.h"

void init_window(global_t *all)
{
    MODE.width = 1920;
    MODE.height = 1080;
    MODE.bitsPerPixel = 32;
    WINDOW = sfRenderWindow_create(MODE, "MyPaint", sfResize | sfClose, NULL);
}

void init_buttons(global_t *all)
{
    IMAGE[1].texture = sfTexture_createFromFile("content/crayon.png", NULL);
    IMAGE[1].sprite = sfSprite_create();
    IMAGE[1].scale.x = 0.5;
    IMAGE[1].scale.y = 0.5;
    IMAGE[1].position.x = 800;
    IMAGE[1].position.y = 500;
    sfSprite_setTexture(IMAGE[1].sprite, IMAGE[1].texture, sfTrue);
    sfSprite_setScale(IMAGE[1].sprite, IMAGE[1].scale);
    sfSprite_setPosition(IMAGE[1].sprite, IMAGE[1].position);
    IMAGE[2].texture = sfTexture_createFromFile("content/button.png", NULL);
    IMAGE[2].sprite = sfSprite_create();
    IMAGE[2].scale.x = 0.5;
    IMAGE[2].scale.y = 0.5;
    IMAGE[2].position.x = 800;
    IMAGE[2].position.y = 650;
    sfSprite_setTexture(IMAGE[2].sprite, IMAGE[2].texture, sfTrue);
    sfSprite_setScale(IMAGE[2].sprite, IMAGE[2].scale);
    sfSprite_setPosition(IMAGE[2].sprite, IMAGE[2].position);
}

void game_decor(global_t *all)
{
    IMAGE[3].texture = sfTexture_createFromFile("content/topbar.png", NULL);
    IMAGE[3].sprite = sfSprite_create();
    IMAGE[3].scale.x = 7.5;
    IMAGE[3].scale.y = 7.5;
    sfSprite_setTexture(IMAGE[3].sprite, IMAGE[3].texture, sfTrue);
    sfSprite_setScale(IMAGE[3].sprite, IMAGE[3].scale);
    IMAGE[4].texture = sfTexture_createFromFile("content/stgs.png", NULL);
    IMAGE[4].sprite = sfSprite_create();
    IMAGE[4].scale.x = 0.4;
    IMAGE[4].scale.y = 0.4;
    sfSprite_setTexture(IMAGE[4].sprite, IMAGE[4].texture, sfTrue);
    sfSprite_setScale(IMAGE[4].sprite, IMAGE[4].scale);
}

void init(global_t *all)
{
    init_window(all);
    init_buttons(all);
    game_decor(all);
    cursor(all);
}
