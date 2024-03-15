/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** initiate sprites
*/

#include "../include/my.h"

void cursor(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f mouse_pos = {mouse.x - 10, mouse.y};

    sfRenderWindow_setMouseCursorVisible(WINDOW, sfFalse);
    IMAGE[13].texture = sfTexture_createFromFile("content/cr.png", NULL);
    IMAGE[13].sprite = sfSprite_create();
    sfSprite_setTexture(IMAGE[13].sprite, IMAGE[13].texture, sfTrue);
    sfSprite_setPosition(IMAGE[13].sprite, mouse_pos);
    IMAGE[13].scale.x = 0.25;
    IMAGE[13].scale.y = 0.25;
    sfSprite_setScale(IMAGE[13].sprite, IMAGE[13].scale);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[13].sprite, NULL);
}

void can(global_t *all)
{
    CANVAS = sfRenderTexture_create(1920, 1080, sfFalse);
}

void drawings(global_t *all)
{
    IMAGE[12].texture = (sfTexture *)sfRenderTexture_getTexture(CANVAS);
    IMAGE[12].sprite = sfSprite_create();
}
