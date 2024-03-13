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

void init_text(global_t *all)
{
    FONT = sfFont_createFromFile("font/arial.ttf");
    IMAGE[14].text = sfText_create();
    sfText_setString(IMAGE[14].text, "Files");
    sfText_setFont(IMAGE[14].text, FONT);
    sfText_setCharacterSize(IMAGE[14].text, 50);
    sfText_setFillColor(IMAGE[14].text, sfWhite);
    IMAGE[14].position.x = 1350;
    IMAGE[14].position.y = 25;
    sfText_setPosition(IMAGE[14].text, IMAGE[14].position);
    IMAGE[15].text = sfText_create();
    sfText_setString(IMAGE[15].text, "Edition");
    sfText_setFont(IMAGE[15].text, FONT);
    sfText_setCharacterSize(IMAGE[15].text, 39);
    sfText_setFillColor(IMAGE[15].text, sfWhite);
    IMAGE[15].position.x = 1480;
    IMAGE[15].position.y = 40;
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
    IMAGE[16].position.x = 1610;
    IMAGE[16].position.y = 25;
    sfText_setPosition(IMAGE[16].text, IMAGE[16].position);
    IMAGE[17].text = sfText_create();
    sfText_setString(IMAGE[17].text, "Exit");
    sfText_setFont(IMAGE[17].text, FONT);
    sfText_setCharacterSize(IMAGE[17].text, 50);
    sfText_setFillColor(IMAGE[17].text, sfWhite);
    IMAGE[17].position.x = 1740;
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
