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

    IMAGE = malloc(sizeof(image_t) * 18);
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

void init_button(global_t *all, int i, int x, int y, sfColor color)
{
    sfRectangleShape* rect = sfRectangleShape_create();
    sfRectangleShape_setSize(rect, (sfVector2f){120.0f, 60.0f});
    sfRectangleShape_setFillColor(rect, color);
    sfRectangleShape_setPosition(rect, (sfVector2f){x, y});
    all->button[i].rect = rect;
}

void init_colors(global_t *all)
{
    init_button(all, 0, 1060, 25, sfRed);
    init_button(all, 1, 660, 25, sfBlue);
    init_button(all, 2, 860, 25, sfGreen);
    init_button(all, 3, BUTTON[3].pos.x, BUTTON[3].pos.y, BUTTON[3].buttoncol);
    init_button(all, 4, BUTTON[4].pos.x, BUTTON[4].pos.y, BUTTON[4].buttoncol);
    init_button(all, 5, BUTTON[5].pos.x, BUTTON[5].pos.y, BUTTON[5].buttoncol);
    init_button(all, 6, BUTTON[6].pos.x, BUTTON[6].pos.y, BUTTON[6].buttoncol);
    init_button(all, 7, BUTTON[7].pos.x, BUTTON[7].pos.y, BUTTON[7].buttoncol);
    init_button(all, 8, BUTTON[8].pos.x, BUTTON[8].pos.y, BUTTON[8].buttoncol);
    init_button(all, 9, BUTTON[9].pos.x, BUTTON[9].pos.y, BUTTON[9].buttoncol);
    init_button(all, 10, BUTTON[10].pos.x, BUTTON[10].pos.y, BUTTON[10].buttoncol);
    init_button(all, 11, BUTTON[11].pos.x, BUTTON[11].pos.y, BUTTON[11].buttoncol);
    init_button(all, 12, BUTTON[12].pos.x, BUTTON[12].pos.y, BUTTON[12].buttoncol);
    init_button(all, 13, BUTTON[13].pos.x, BUTTON[13].pos.y, BUTTON[13].buttoncol);
}

void cleanup_buttons(global_t *all)
{
    for (int i = 0; i <= 13; i++) {
        sfSprite_destroy(IMAGE[i].sprite);
    }
    for (int i = 14; i <= 17; i++) {
        sfText_destroy(IMAGE[i].text);
    }
    for (int k = 0; k <= 2; k++) {
        sfRectangleShape_destroy(BUTTON[k].rect);
    }
}
