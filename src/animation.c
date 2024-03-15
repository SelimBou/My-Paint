/*
** EPITECH PROJECT, 2023
** animation
** File description:
** animation.c
*/

#include "../include/my.h"

static void apply_red(global_t *all, int i)
{
    if ((i <= 6) ||
        (i >= 7 && i <= 9 && all->clicked_file == true) ||
        (i >= 10 && i <= 11 && all->clicked_edit == true) ||
        (i >= 12 && i <= 13 && all->clicked_help == true)) {
        BUTTON[i].buttoncol = sfRed;
        pressed(all, i);
    }
}

void check_hover(global_t *all, sfVector2i mouse)
{
    for (int i = 3; i <= 13; i++) {
        if (mouse.x >= BUTTON[i].pos.x && mouse.x <= BUTTON[i].pos.x + 120 &&
            mouse.y >= BUTTON[i].pos.y && mouse.y <= BUTTON[i].pos.y + 60) {
            apply_red(all, i);
        }
    }
    if (mouse.x >= BUTTON[0].pos.x && mouse.x <= BUTTON[0].pos.x + 120 &&
        mouse.y >= BUTTON[0].pos.y && mouse.y <= BUTTON[0].pos.y + 60) {
        BUTTON[0].buttoncol = sfColor_fromRGB(175, 0, 0);
        pressed(all, 0);
    }
}

void hover(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    all->button = malloc(sizeof(button_t) * 16);
    init_col_pos(all);
    check_hover(all, mouse);
    if (mouse.x >= BUTTON[1].pos.x && mouse.x <= BUTTON[1].pos.x + 120 &&
        mouse.y >= BUTTON[1].pos.y && mouse.y <= BUTTON[1].pos.y + 60) {
        BUTTON[1].buttoncol = sfColor_fromRGB(0, 0, 175);
        pressed(all, 1);
    }
    if (mouse.x >= BUTTON[2].pos.x && mouse.x <= BUTTON[2].pos.x + 120 &&
        mouse.y >= BUTTON[2].pos.y && mouse.y <= BUTTON[2].pos.y + 60) {
        BUTTON[2].buttoncol = sfColor_fromRGB(0, 175, 0);
        pressed(all, 2);
    }
    if (mouse.x >= BUTTON[14].pos.x && mouse.x <= BUTTON[14].pos.x + 120 &&
        mouse.y >= BUTTON[14].pos.y && mouse.y <= BUTTON[14].pos.y + 60) {
        BUTTON[14].buttoncol = sfColor_fromRGB(25, 25, 25);
        pressed(all, 14);
    }
    init_colors(all);
}

void init_button_0_to_2(global_t *all)
{
    BUTTON[0].buttoncol = sfRed;
    BUTTON[0].pos.x = 400;
    BUTTON[0].pos.y = 25;
    BUTTON[1].buttoncol = sfBlue;
    BUTTON[1].pos.x = 250;
    BUTTON[1].pos.y = 25;
    BUTTON[2].buttoncol = sfGreen;
    BUTTON[2].pos.x = 100;
    BUTTON[2].pos.y = 25;
}

void init_button_3_to_6(global_t *all)
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
}

void init_button_7_to_10(global_t *all)
{
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
}

void init_button_11_to_15(global_t *all)
{
    BUTTON[11].buttoncol = sfBlack;
    BUTTON[11].pos.x = 1480;
    BUTTON[11].pos.y = 190;
    BUTTON[12].buttoncol = sfBlack;
    BUTTON[12].pos.x = 1610;
    BUTTON[12].pos.y = 110;
    BUTTON[13].buttoncol = sfBlack;
    BUTTON[13].pos.x = 1610;
    BUTTON[13].pos.y = 190;
    BUTTON[14].buttoncol = sfBlack;
    BUTTON[14].pos.x = 550;
    BUTTON[14].pos.y = 25;
    BUTTON[15].buttoncol = sfColor_fromRGB(128, 128, 0);
    BUTTON[15].pos.x = 810;
    BUTTON[15].pos.y = 400;
}

void init_col_pos(global_t *all)
{
    init_button_0_to_2(all);
    init_button_3_to_6(all);
    init_button_7_to_10(all);
    init_button_11_to_15(all);
}

void pressed(global_t *all, int i)
{
    if (EVENT.type == sfEvtMouseButtonPressed) {
        BUTTON[i].buttoncol = sfGreen;
    }
    if (EVENT.type == sfEvtMouseButtonPressed && i == 0) {
        BUTTON[0].buttoncol = sfColor_fromRGB(130, 0, 0);
    }
    if (EVENT.type == sfEvtMouseButtonPressed && i == 1) {
        BUTTON[1].buttoncol = sfColor_fromRGB(0, 0, 130);
    }
    if (EVENT.type == sfEvtMouseButtonPressed && i == 2) {
        BUTTON[2].buttoncol = sfColor_fromRGB(0, 130, 0);
    }
    if (EVENT.type == sfEvtMouseButtonPressed && i == 14) {
        BUTTON[14].buttoncol = sfColor_fromRGB(50, 50, 50);
    }
}
