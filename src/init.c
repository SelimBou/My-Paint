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

void init_menu(global_t *all)
{
    sfColor color = sfColor_fromRGB(128, 128, 128);

    IMAGE = malloc(sizeof(image_t) * 11);
    IMAGE[0].image = sfImage_createFromColor(1980, 970, sfWhite);
    IMAGE[0].texture = sfTexture_createFromImage(IMAGE[0].image, sfFalse);
    IMAGE[0].sprite = sfSprite_create();
    IMAGE[0].position.x = 0;
    IMAGE[0].position.y = 110;
    sfSprite_setTexture(IMAGE[0].sprite, IMAGE[0].texture, sfTrue);
    sfSprite_setPosition(IMAGE[0].sprite, IMAGE[0].position);
    IMAGE[1].image = sfImage_createFromColor(1980, 110, color);
    IMAGE[1].texture = sfTexture_createFromImage(IMAGE[1].image, sfFalse);
    IMAGE[1].sprite = sfSprite_create();
    IMAGE[1].position.x = 0;
    IMAGE[1].position.y = 0;
    sfSprite_setTexture(IMAGE[1].sprite, IMAGE[1].texture, sfTrue);
    sfSprite_setPosition(IMAGE[1].sprite, IMAGE[1].position);
}

void cursor(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f mouse_pos = {mouse.x - 10, mouse.y};

    sfWindow_setMouseCursorVisible(WINDOW, sfFalse);
    IMAGE[10].texture = sfTexture_createFromFile("content/cr.png", NULL);
    IMAGE[10].sprite = sfSprite_create();
    sfSprite_setTexture(IMAGE[10].sprite, IMAGE[10].texture, sfTrue);
    sfSprite_setPosition(IMAGE[10].sprite, mouse_pos);
    IMAGE[10].scale.x = 0.25;
    IMAGE[10].scale.y = 0.25;
    sfSprite_setScale(IMAGE[10].sprite, IMAGE[10].scale);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[10].sprite, NULL);
}

void can(global_t *all)
{
    all->settings.canvas = sfRenderTexture_create(1920, 1080, sfFalse);
    all->settings.brush = sfCircleShape_create();
    sfCircleShape_setRadius(all->settings.brush, 5);
    sfCircleShape_setFillColor(all->settings.brush, sfBlack);
}

void init(global_t *all)
{
    init_window(all);
    init_menu(all);
    can(all);
}
