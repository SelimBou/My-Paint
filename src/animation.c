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
    init_manually(all);
    IMAGE[20].buttoncol = sfBlack;
    IMAGE[21].buttoncol = sfBlack;
    IMAGE[22].buttoncol = sfBlack;
    IMAGE[23].buttoncol = sfBlack;

    for (int i = 12; i <= 15; i++) {
        for (int k = 20; k <= 23; k++) {
            if (mouse.x >= IMAGE[i].position.x &&
            mouse.x <= IMAGE[i].position.x + 120 &&
            mouse.y >= IMAGE[i].position.y &&
            mouse.y <= IMAGE[i].position.y + 60 && i == k - 8) {
                IMAGE[k].buttoncol = sfRed;
                IMAGE[i].image = sfImage_createFromColor(120, 60, IMAGE[k].buttoncol);
                pressed(all, i, k);
            }
        }
    }
}

void pressed(global_t *all, int i, int k)
{
    if (EVENT.type == sfEvtMouseButtonPressed) {
        IMAGE[k].buttoncol = sfGreen;
        IMAGE[i].image = sfImage_createFromColor(120, 60, IMAGE[k].buttoncol);
    }
}