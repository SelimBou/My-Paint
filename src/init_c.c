/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** initiate sprites
*/

#include "../include/my.h"

void show_it(global_t *all)
{
    sfSprite_setTexture(IMAGE[11].sprite, IMAGE[11].texture, sfFalse);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[11].sprite, NULL);
    sfSprite_destroy(IMAGE[11].sprite);
}

void init_manually(global_t *all)
{
    IMAGE[12].image = sfImage_createFromColor(120, 60, IMAGE[20].buttoncol);
    IMAGE[12].texture = sfTexture_createFromImage(IMAGE[12].image, sfFalse);
    IMAGE[12].sprite = sfSprite_create();
    IMAGE[12].position.x = 1800;
    IMAGE[12].position.y = 25;
    sfSprite_setTexture(IMAGE[12].sprite, IMAGE[12].texture, sfTrue);
    sfSprite_setPosition(IMAGE[12].sprite, IMAGE[12].position);
    IMAGE[13].image = sfImage_createFromColor(120, 60, IMAGE[21].buttoncol);
    IMAGE[13].texture = sfTexture_createFromImage(IMAGE[13].image, sfFalse);
    IMAGE[13].sprite = sfSprite_create();
    IMAGE[13].position.x = 1650;
    IMAGE[13].position.y = 25;
    sfSprite_setTexture(IMAGE[13].sprite, IMAGE[13].texture, sfTrue);
    sfSprite_setPosition(IMAGE[13].sprite, IMAGE[13].position);
    init_manually_b(all);
}

void init_manually_b(global_t *all)
{
    IMAGE[14].image = sfImage_createFromColor(120, 60, IMAGE[22].buttoncol);
    IMAGE[14].texture = sfTexture_createFromImage(IMAGE[14].image, sfFalse);
    IMAGE[14].sprite = sfSprite_create();
    IMAGE[14].position.x = 1500;
    IMAGE[14].position.y = 25;
    sfSprite_setTexture(IMAGE[14].sprite, IMAGE[14].texture, sfTrue);
    sfSprite_setPosition(IMAGE[14].sprite, IMAGE[14].position);
    IMAGE[15].image = sfImage_createFromColor(120, 60, IMAGE[23].buttoncol);
    IMAGE[15].texture = sfTexture_createFromImage(IMAGE[15].image, sfFalse);
    IMAGE[15].sprite = sfSprite_create();
    IMAGE[15].position.x = 1350;
    IMAGE[15].position.y = 25;
    sfSprite_setTexture(IMAGE[15].sprite, IMAGE[15].texture, sfTrue);
    sfSprite_setPosition(IMAGE[15].sprite, IMAGE[15].position);
}

void init_text(global_t *all)
{
    FONT = sfFont_createFromFile("font/arial.ttf");
    IMAGE[16].text = sfText_create();
    sfText_setString(IMAGE[16].text, "Files");
    sfText_setFont(IMAGE[16].text, FONT);
    sfText_setCharacterSize(IMAGE[16].text, 50);
    sfText_setFillColor(IMAGE[16].text, sfWhite);
    IMAGE[16].position.x = 1350;
    IMAGE[16].position.y = 25;
    sfText_setPosition(IMAGE[16].text, IMAGE[16].position);
    IMAGE[17].text = sfText_create();
    sfText_setString(IMAGE[17].text, "Clear");
    sfText_setFont(IMAGE[17].text, FONT);
    sfText_setCharacterSize(IMAGE[17].text, 50);
    sfText_setFillColor(IMAGE[17].text, sfWhite);
    IMAGE[17].position.x = 1500;
    IMAGE[17].position.y = 25;
    sfText_setPosition(IMAGE[17].text, IMAGE[17].position);
    init_text_b(all);
}

void init_text_b(global_t *all)
{
    IMAGE[18].text = sfText_create();
    sfText_setString(IMAGE[18].text, "Help");
    sfText_setFont(IMAGE[18].text, FONT);
    sfText_setCharacterSize(IMAGE[18].text, 50);
    sfText_setFillColor(IMAGE[18].text, sfWhite);
    IMAGE[18].position.x = 1650;
    IMAGE[18].position.y = 25;
    sfText_setPosition(IMAGE[18].text, IMAGE[18].position);
    IMAGE[19].text = sfText_create();
    sfText_setString(IMAGE[19].text, "Exit");
    sfText_setFont(IMAGE[19].text, FONT);
    sfText_setCharacterSize(IMAGE[19].text, 50);
    sfText_setFillColor(IMAGE[19].text, sfWhite);
    IMAGE[19].position.x = 1800;
    IMAGE[19].position.y = 25;
    sfText_setPosition(IMAGE[19].text, IMAGE[19].position);
}

void init(global_t *all)
{
    init_window(all);
    init_menu(all);
    init_buttons(all);
    init_colors(all);
    init_colors_b(all);
    init_files(all);
    init_files_b(all);
    init_text(all);
    can(all);
}
