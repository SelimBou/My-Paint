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
    init_buttons(all);
    init_colors(all);
    init_files(all);
    can(all);
}
