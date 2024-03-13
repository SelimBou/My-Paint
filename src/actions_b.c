/*
** EPITECH PROJECT, 2023
** actions
** File description:
** action.c
*/

#include "../include/my.h"

void exit_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[12].position.x &&
    mouse.x <= IMAGE[12].position.x + 120 &&
    mouse.y >= IMAGE[12].position.y &&
    mouse.y <= IMAGE[12].position.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(WINDOW);
        }
    }
}

void change_color(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >=  1060 && mouse.x <= 1180 && mouse.y >=  25 && mouse.y <=  85) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            COLOR = sfRed;
        }
    }
    if (mouse.x >=  660 && mouse.x <= 980 && mouse.y >=  25 && mouse.y <=  85) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            COLOR = sfColor_fromRGB(0, 255, 0);
        }
    }
    change_color_b(all, mouse);
}

void change_color_b(global_t *all, sfVector2i mouse)
{
    if (mouse.x >=  660 && mouse.x <= 780 && mouse.y >=  25 && mouse.y <=  85) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            COLOR = sfColor_fromRGB(0, 0, 255);
        }
    }
}
