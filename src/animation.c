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

void hover_b(global_t *all, sfVector2i mouse)
{
    if (mouse.x >= BUTTON[14].pos.x && mouse.x <= BUTTON[14].pos.x + 120 &&
        mouse.y >= BUTTON[14].pos.y && mouse.y <= BUTTON[14].pos.y + 60) {
        BUTTON[14].buttoncol = sfColor_fromRGB(25, 25, 25);
        pressed(all, 14);
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
    hover_b(all, mouse);
    init_colors(all);
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
