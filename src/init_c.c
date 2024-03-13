/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** initiate sprites
*/

#include "../include/my.h"

void show_it(global_t *all)
{
    sfSprite_setTexture(IMAGE[12].sprite, IMAGE[12].texture, sfFalse);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[12].sprite, NULL);
    sfSprite_destroy(IMAGE[12].sprite);
}

/*void init_manually(global_t *all)
{
    IMAGE[4].image = sfImage_createFromColor(120, 60, IMAGE[8].buttoncol);
    IMAGE[4].texture = sfTexture_createFromImage(IMAGE[4].image, sfFalse);
    IMAGE[4].sprite = sfSprite_create();
    IMAGE[4].position.x = 1800;
    IMAGE[4].position.y = 25;
    sfSprite_setTexture(IMAGE[4].sprite, IMAGE[4].texture, sfTrue);
    sfSprite_setPosition(IMAGE[4].sprite, IMAGE[4].position);
    IMAGE[5].image = sfImage_createFromColor(120, 60, IMAGE[9].buttoncol);
    IMAGE[5].texture = sfTexture_createFromImage(IMAGE[5].image, sfFalse);
    IMAGE[5].sprite = sfSprite_create();
    IMAGE[5].position.x = 1650;
    IMAGE[5].position.y = 25;
    sfSprite_setTexture(IMAGE[5].sprite, IMAGE[5].texture, sfTrue);
    sfSprite_setPosition(IMAGE[5].sprite, IMAGE[5].position);
    init_manually_b(all);
}

void init_manually_b(global_t *all)
{
    IMAGE[6].image = sfImage_createFromColor(120, 60, IMAGE[10].buttoncol);
    IMAGE[6].texture = sfTexture_createFromImage(IMAGE[6].image, sfFalse);
    IMAGE[6].sprite = sfSprite_create();
    IMAGE[6].position.x = 1500;
    IMAGE[6].position.y = 25;
    sfSprite_setTexture(IMAGE[6].sprite, IMAGE[6].texture, sfTrue);
    sfSprite_setPosition(IMAGE[6].sprite, IMAGE[6].position);
    IMAGE[7].image = sfImage_createFromColor(120, 60, IMAGE[11].buttoncol);
    IMAGE[7].texture = sfTexture_createFromImage(IMAGE[7].image, sfFalse);
    IMAGE[7].sprite = sfSprite_create();
    IMAGE[7].position.x = 1350;
    IMAGE[7].position.y = 25;
    sfSprite_setTexture(IMAGE[7].sprite, IMAGE[7].texture, sfTrue);
    sfSprite_setPosition(IMAGE[7].sprite, IMAGE[7].position);
}*/

void init_text(global_t *all)
{
    FONT = sfFont_createFromFile("font/arial.ttf");
    IMAGE[14].text = sfText_create();
    sfText_setString(IMAGE[14].text, "Files");
    sfText_setFont(IMAGE[14].text, FONT);
    sfText_setCharacterSize(IMAGE[14].text, 50);
    sfText_setFillColor(IMAGE[14].text, sfWhite);
    IMAGE[14].position.x = 1400;
    IMAGE[14].position.y = 25;
    sfText_setPosition(IMAGE[14].text, IMAGE[14].position);
    IMAGE[15].text = sfText_create();
    sfText_setString(IMAGE[15].text, "Clear");
    sfText_setFont(IMAGE[15].text, FONT);
    sfText_setCharacterSize(IMAGE[15].text, 50);
    sfText_setFillColor(IMAGE[15].text, sfWhite);
    IMAGE[15].position.x = 1550;
    IMAGE[15].position.y = 25;
    sfText_setPosition(IMAGE[15].text, IMAGE[15].position);
    init_text_b(all);
}

void init_text_b(global_t *all)
{
    IMAGE[16].text = sfText_create();
    sfText_setString(IMAGE[16].text, "Help");
    sfText_setFont(IMAGE[16].text, FONT);
    sfText_setCharacterSize(IMAGE[16].text, 50);
    sfText_setFillColor(IMAGE[16].text, sfWhite);
    IMAGE[16].position.x = 1700;
    IMAGE[16].position.y = 25;
    sfText_setPosition(IMAGE[16].text, IMAGE[16].position);
    IMAGE[17].text = sfText_create();
    sfText_setString(IMAGE[17].text, "Exit");
    sfText_setFont(IMAGE[17].text, FONT);
    sfText_setCharacterSize(IMAGE[17].text, 50);
    sfText_setFillColor(IMAGE[17].text, sfWhite);
    IMAGE[17].position.x = 1850;
    IMAGE[17].position.y = 25;
    sfText_setPosition(IMAGE[17].text, IMAGE[17].position);
}

void init(global_t *all)
{
    init_window(all);
    init_menu(all);
    init_buttons(all);
    init_colors(all);
    init_text(all);
    can(all);
}
