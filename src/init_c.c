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

void init_text_button(global_t *all, text_button_t tb)
{
    IMAGE[tb.index].text = sfText_create();
    sfText_setString(IMAGE[tb.index].text, tb.str);
    sfText_setFont(IMAGE[tb.index].text, FONT);
    sfText_setCharacterSize(IMAGE[tb.index].text, tb.size);
    sfText_setFillColor(IMAGE[tb.index].text, tb.color);
    IMAGE[tb.index].position.x = tb.x;
    IMAGE[tb.index].position.y = tb.y;
    sfText_setPosition(IMAGE[tb.index].text, IMAGE[tb.index].position);
}

/*void init_text(global_t *all)
{
    FONT = sfFont_createFromFile("font/arial.ttf");
    init_text_button(all, (text_button_t){14, "Files", 50, sfWhite, 1350, 25});
    init_text_button(all, (text_button_t){15, "Edition", 39, sfWhite,
        1480, 40});
    init_text_button(all, (text_button_t){16, "Help", 50, sfWhite,
        1610, 25});
    init_text_button(all, (text_button_t){17, "Exit", 50, sfWhite, 1740, 25});
    init_text_button(all, (text_button_t){18, "New file", 30, sfBlue,
        1350, 110});
    init_text_button(all, (text_button_t){19, "Save file", 30, sfBlue,
        1350, 190});
    init_text_button(all, (text_button_t){20, "Open file", 30, sfBlue,
        1350, 270});
    init_text_button(all, (text_button_t){21, "Software", 30, sfBlue,
        1610, 190});
    init_text_button(all, (text_button_t){22, "Voulez vous sauvegarder ?", 28,
        sfColor_fromRGB(64,224,208), 815, 410});
    init_text_button(all, (text_button_t){23, "OUI", 28, sfGreen,
        820, 480});
    init_text_button(all, (text_button_t){24, "NON", 28, sfRed,
        1090, 480});
}*/

static void init_menu_buttons(global_t *all)
{
    FONT = sfFont_createFromFile("font/arial.ttf");
    init_text_button(all, (text_button_t){14, "Files", 50, sfWhite, 1350, 25});
    init_text_button(all, (text_button_t){15, "Edition", 39, sfWhite, 1480, 40});
    init_text_button(all, (text_button_t){16, "Help", 50, sfWhite, 1610, 25});
    init_text_button(all, (text_button_t){17, "Exit", 50, sfWhite, 1740, 25});
}

static void init_other_buttons(global_t *all)
{
    init_text_button(all, (text_button_t){18, "New file", 30, sfBlue, 1350, 110});
    init_text_button(all, (text_button_t){19, "Save file", 30, sfBlue, 1350, 190});
    init_text_button(all, (text_button_t){20, "Open file", 30, sfBlue, 1350, 270});
    init_text_button(all, (text_button_t){21, "Software", 30, sfBlue, 1610, 190});
    init_text_button(all, (text_button_t){22, "Voulez vous sauvegarder ?", 28,
        sfColor_fromRGB(64,224,208), 815, 410});
    init_text_button(all, (text_button_t){23, "OUI", 28, sfGreen, 820, 480});
    init_text_button(all, (text_button_t){24, "NON", 28, sfRed, 1090, 480});
}

void init_text(global_t *all)
{
    init_menu_buttons(all);
    init_other_buttons(all);
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
