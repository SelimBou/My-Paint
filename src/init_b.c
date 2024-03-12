/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** initiate sprites
*/

#include "../include/my.h"

void init_files(global_t *all)
{
    IMAGE[7].texture = sfTexture_createFromFile("content/save.png", NULL);
    IMAGE[7].sprite = sfSprite_create();
    IMAGE[7].scale.x = 0.2;
    IMAGE[7].scale.y = 0.2;
    IMAGE[7].position.x = 1300;
    IMAGE[7].position.y = 5;
    sfSprite_setTexture(IMAGE[7].sprite, IMAGE[7].texture, sfTrue);
    sfSprite_setScale(IMAGE[7].sprite, IMAGE[7].scale);
    sfSprite_setPosition(IMAGE[7].sprite, IMAGE[7].position);
    IMAGE[8].texture = sfTexture_createFromFile("content/clear.png", NULL);
    IMAGE[8].sprite = sfSprite_create();
    IMAGE[8].scale.x = 0.35;
    IMAGE[8].scale.y = 0.35;
    IMAGE[8].position.x = 1450;
    IMAGE[8].position.y = 5;
    sfSprite_setTexture(IMAGE[8].sprite, IMAGE[8].texture, sfTrue);
    sfSprite_setScale(IMAGE[8].sprite, IMAGE[8].scale);
    sfSprite_setPosition(IMAGE[8].sprite, IMAGE[8].position);
}

void init_files_b(global_t *all)
{
    IMAGE[9].texture = sfTexture_createFromFile("content/exit.png", NULL);
    IMAGE[9].sprite = sfSprite_create();
    IMAGE[9].scale.x = 0.15;
    IMAGE[9].scale.y = 0.15;
    IMAGE[9].position.x = 1750;
    IMAGE[9].position.y = 0;
    sfSprite_setTexture(IMAGE[9].sprite, IMAGE[9].texture, sfTrue);
    sfSprite_setScale(IMAGE[9].sprite, IMAGE[9].scale);
    sfSprite_setPosition(IMAGE[9].sprite, IMAGE[9].position);
}

void cursor(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f mouse_pos = {mouse.x - 10, mouse.y};

    sfRenderWindow_setMouseCursorVisible(WINDOW, sfFalse);
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
    CANVAS = sfRenderTexture_create(1920, 1080, sfFalse);
}

void drawings(global_t *all)
{
    IMAGE[11].texture = (sfTexture *)sfRenderTexture_getTexture(CANVAS);
    IMAGE[11].sprite = sfSprite_create();
}
