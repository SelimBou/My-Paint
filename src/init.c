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

void init_buttons(global_t *all)
{
    IMAGE[2].texture = sfTexture_createFromFile("content/cr.png", NULL);
    IMAGE[2].sprite = sfSprite_create();
    IMAGE[2].scale.x = 0.13;
    IMAGE[2].scale.y = 0.13;
    IMAGE[2].position.x = 100;
    IMAGE[2].position.y = 20;
    sfSprite_setTexture(IMAGE[2].sprite, IMAGE[2].texture, sfTrue);
    sfSprite_setScale(IMAGE[2].sprite, IMAGE[2].scale);
    sfSprite_setPosition(IMAGE[2].sprite, IMAGE[2].position);
    IMAGE[3].texture = sfTexture_createFromFile("content/gomme.png", NULL);
    IMAGE[3].sprite = sfSprite_create();
    IMAGE[3].scale.x = 0.13;
    IMAGE[3].scale.y = 0.13;
    IMAGE[3].position.x = 200;
    IMAGE[3].position.y = 20;
    sfSprite_setTexture(IMAGE[3].sprite, IMAGE[3].texture, sfTrue);
    sfSprite_setScale(IMAGE[3].sprite, IMAGE[3].scale);
    sfSprite_setPosition(IMAGE[3].sprite, IMAGE[3].position);
}

void init_colors(global_t *all)
{
    IMAGE[4].texture = sfTexture_createFromFile("content/red.png", NULL);
    IMAGE[4].sprite = sfSprite_create();
    IMAGE[4].scale.x = 0.10;
    IMAGE[4].scale.y = 0.10;
    IMAGE[4].position.x = 500;
    IMAGE[4].position.y = 20;
    sfSprite_setTexture(IMAGE[4].sprite, IMAGE[4].texture, sfTrue);
    sfSprite_setScale(IMAGE[4].sprite, IMAGE[4].scale);
    sfSprite_setPosition(IMAGE[4].sprite, IMAGE[4].position);
    IMAGE[5].texture = sfTexture_createFromFile("content/green.png", NULL);
    IMAGE[5].sprite = sfSprite_create();
    IMAGE[5].scale.x = 0.10;
    IMAGE[5].scale.y = 0.10;
    IMAGE[5].position.x = 600;
    IMAGE[5].position.y = 20;
    sfSprite_setTexture(IMAGE[5].sprite, IMAGE[5].texture, sfTrue);
    sfSprite_setScale(IMAGE[5].sprite, IMAGE[5].scale);
    sfSprite_setPosition(IMAGE[5].sprite, IMAGE[5].position);
    IMAGE[6].texture = sfTexture_createFromFile("content/blue.png", NULL);
    IMAGE[6].sprite = sfSprite_create();
    IMAGE[6].scale.x = 0.10;
    IMAGE[6].scale.y = 0.10;
    IMAGE[6].position.x = 700;
    IMAGE[6].position.y = 20;
    sfSprite_setTexture(IMAGE[6].sprite, IMAGE[6].texture, sfTrue);
    sfSprite_setScale(IMAGE[6].sprite, IMAGE[6].scale);
    sfSprite_setPosition(IMAGE[6].sprite, IMAGE[6].position);
}

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
