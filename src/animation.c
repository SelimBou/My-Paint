/*
** EPITECH PROJECT, 2023
** animation
** File description:
** animation.c
*/

#include "../include/my.h"

void hover(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    all->button = malloc(sizeof(button_t) * 15);
    init_col_pos(all);
    for (int i = 3; i <= 6; i++) {
        if (mouse.x >= BUTTON[i].pos.x && mouse.x <= BUTTON[i].pos.x + 120 &&
            mouse.y >= BUTTON[i].pos.y && mouse.y <= BUTTON[i].pos.y + 60) {
            BUTTON[i].buttoncol = sfRed;
            pressed(all, i);
        }
    }
    for (int i = 7; i <= 9; i++) {
        if (mouse.x >= BUTTON[i].pos.x && mouse.x <= BUTTON[i].pos.x + 120 &&
            mouse.y >= BUTTON[i].pos.y && mouse.y <= BUTTON[i].pos.y + 60 &&
            all->clicked_file == true) {
            BUTTON[i].buttoncol = sfRed;
            pressed(all, i);
        }
    }
    for (int i = 10; i <= 11; i++) {
        if (mouse.x >= BUTTON[i].pos.x && mouse.x <= BUTTON[i].pos.x + 120 &&
            mouse.y >= BUTTON[i].pos.y && mouse.y <= BUTTON[i].pos.y + 60 &&
            all->clicked_edit == true) {
            BUTTON[i].buttoncol = sfRed;
            pressed(all, i);
        }
    }
    for (int i = 12; i <= 13; i++) {
        if (mouse.x >= BUTTON[i].pos.x && mouse.x <= BUTTON[i].pos.x + 120 &&
            mouse.y >= BUTTON[i].pos.y && mouse.y <= BUTTON[i].pos.y + 60 &&
            all->clicked_help == true) {
            BUTTON[i].buttoncol = sfRed;
            pressed(all, i);
        }
    }
    init_colors(all);
}

void init_col_pos(global_t *all)
{
    BUTTON[3].buttoncol = sfBlack;
    BUTTON[3].pos.x = 1350;
    BUTTON[3].pos.y = 25;
    BUTTON[4].buttoncol = sfBlack;
    BUTTON[4].pos.x = 1480;
    BUTTON[4].pos.y = 25;
    BUTTON[5].buttoncol = sfBlack;
    BUTTON[5].pos.x = 1610;
    BUTTON[5].pos.y = 25;
    BUTTON[6].buttoncol = sfBlack;
    BUTTON[6].pos.x = 1740;
    BUTTON[6].pos.y = 25;
    BUTTON[7].buttoncol = sfBlack;
    BUTTON[7].pos.x = 1350;
    BUTTON[7].pos.y = 110;
    BUTTON[8].buttoncol = sfBlack;
    BUTTON[8].pos.x = 1350;
    BUTTON[8].pos.y = 190;
    BUTTON[9].buttoncol = sfBlack;
    BUTTON[9].pos.x = 1350;
    BUTTON[9].pos.y = 270;
    BUTTON[10].buttoncol = sfBlack;
    BUTTON[10].pos.x = 1480;
    BUTTON[10].pos.y = 110;
    BUTTON[11].buttoncol = sfBlack;
    BUTTON[11].pos.x = 1480;
    BUTTON[11].pos.y = 190;
    BUTTON[12].buttoncol = sfBlack;
    BUTTON[12].pos.x = 1610;
    BUTTON[12].pos.y = 110;
    BUTTON[13].buttoncol = sfBlack;
    BUTTON[13].pos.x = 1610;
    BUTTON[13].pos.y = 190;
}

void pressed(global_t *all, int i)
{
    if (EVENT.type == sfEvtMouseButtonPressed) {
        BUTTON[i].buttoncol = sfGreen;
    }
}
