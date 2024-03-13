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
    IMAGE[8].buttoncol = sfBlack;
    IMAGE[9].buttoncol = sfBlack;
    IMAGE[10].buttoncol = sfBlack;
    IMAGE[11].buttoncol = sfBlack;
    for (int i = 4; i <= 7; i++) {
        for (int k = 8; k <= 11; k++) {
            if (mouse.x >= IMAGE[i].position.x &&
            mouse.x <= IMAGE[i].position.x + 120 &&
            mouse.y >= IMAGE[i].position.y &&
            mouse.y <= IMAGE[i].position.y + 60 && i == k - 4) {
                IMAGE[k].buttoncol = sfRed;
                IMAGE[i].image = sfImage_createFromColor(120, 60,
                    IMAGE[k].buttoncol);
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
