/*
** EPITECH PROJECT, 2023
** init_game.c
** File description:
** initiate sprites
*/

#include <stdio.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include "../include/my.h"

void cursor(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f mouse_pos = {mouse.x - 33, mouse.y - 33};

    IMAGE[10].texture = sfTexture_createFromFile("content/scene/cr.png", NULL);
    IMAGE[10].sprite = sfSprite_create();
    sfSprite_setTexture(IMAGE[10].sprite, IMAGE[10].texture, sfTrue);
    sfSprite_setPosition(IMAGE[10].sprite, mouse_pos);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[10].sprite, NULL);
}
