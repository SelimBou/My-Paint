/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** initiate sprites
*/

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

    IMAGE = malloc(sizeof(image_t) * 26);
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

void init_buttons(global_t *all)
{
    IMAGE[2].texture = sfTexture_createFromFile("content/cr.png", NULL);
    IMAGE[2].sprite = sfSprite_create();
    IMAGE[2].scale.x = 0.11;
    IMAGE[2].scale.y = 0.11;
    IMAGE[2].position.x = 1500;
    IMAGE[2].position.y = 110;
    sfSprite_setTexture(IMAGE[2].sprite, IMAGE[2].texture, sfTrue);
    sfSprite_setScale(IMAGE[2].sprite, IMAGE[2].scale);
    sfSprite_setPosition(IMAGE[2].sprite, IMAGE[2].position);
    IMAGE[3].texture = sfTexture_createFromFile("content/gomme.png", NULL);
    IMAGE[3].sprite = sfSprite_create();
    IMAGE[3].scale.x = 0.11;
    IMAGE[3].scale.y = 0.11;
    IMAGE[3].position.x = 1500;
    IMAGE[3].position.y = 190;
    sfSprite_setTexture(IMAGE[3].sprite, IMAGE[3].texture, sfTrue);
    sfSprite_setScale(IMAGE[3].sprite, IMAGE[3].scale);
    sfSprite_setPosition(IMAGE[3].sprite, IMAGE[3].position);
}

void init_button(global_t *all, int i, sfVector2f position, sfColor color)
{
    sfRectangleShape* rect = sfRectangleShape_create();

    if (i == 15)
        sfRectangleShape_setSize(rect, (sfVector2f){350.0f, 120.0f});
    else
        sfRectangleShape_setSize(rect, (sfVector2f){120.0f, 60.0f});
    sfRectangleShape_setFillColor(rect, color);
    sfRectangleShape_setPosition(rect, position);
    all->button[i].rect = rect;
}

void init_colors(global_t *all)
{
    for (int i = 0; i <= 15; i++) {
        init_button(all, i, (sfVector2f){BUTTON[i].pos.x, BUTTON[i].pos.y},
            BUTTON[i].buttoncol);
    }
}
