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

static void init_text_d(global_t *all)
{
    IMAGE[20].text = sfText_create();
    sfText_setString(IMAGE[20].text, "Open file");
    sfText_setFont(IMAGE[20].text, FONT);
    sfText_setCharacterSize(IMAGE[20].text, 30);
    sfText_setFillColor(IMAGE[20].text, sfBlue);
    IMAGE[20].position.x = 1350;
    IMAGE[20].position.y = 270;
    sfText_setPosition(IMAGE[20].text, IMAGE[20].position);
    IMAGE[21].text = sfText_create();
    sfText_setString(IMAGE[21].text, "Software");
    sfText_setFont(IMAGE[21].text, FONT);
    sfText_setCharacterSize(IMAGE[21].text, 30);
    sfText_setFillColor(IMAGE[21].text, sfBlue);
    IMAGE[21].position.x = 1610;
    IMAGE[21].position.y = 190;
    sfText_setPosition(IMAGE[21].text, IMAGE[21].position);
}

static void init_text_c(global_t *all)
{
    IMAGE[18].text = sfText_create();
    sfText_setString(IMAGE[18].text, "New file");
    sfText_setFont(IMAGE[18].text, FONT);
    sfText_setCharacterSize(IMAGE[18].text, 30);
    sfText_setFillColor(IMAGE[18].text, sfBlue);
    IMAGE[18].position.x = 1350;
    IMAGE[18].position.y = 110;
    sfText_setPosition(IMAGE[18].text, IMAGE[18].position);
    IMAGE[19].text = sfText_create();
    sfText_setString(IMAGE[19].text, "Save file");
    sfText_setFont(IMAGE[19].text, FONT);
    sfText_setCharacterSize(IMAGE[19].text, 30);
    sfText_setFillColor(IMAGE[19].text, sfBlue);
    IMAGE[19].position.x = 1350;
    IMAGE[19].position.y = 190;
    sfText_setPosition(IMAGE[19].text, IMAGE[19].position);
    init_text_d(all);
}

static void init_text_b(global_t *all)
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
    init_text_c(all);
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

void init(global_t *all)
{
    init_window(all);
    init_menu(all);
    init_buttons(all);
    init_colors(all);
    init_text(all);
    can(all);
}
