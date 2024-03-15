/*
** EPITECH PROJECT, 2023
** actions
** File description:
** action.c
*/

#include "../include/my.h"

/*void display_save_prompt(sfRenderWindow* window, global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

}*/

/*void exit_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[6].pos.x && mouse.x <= BUTTON[6].pos.x + 120 &&
    mouse.y >= BUTTON[6].pos.y && mouse.y <= BUTTON[6].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            display_save_prompt(WINDOW, all);
        }
    }
}*/

void change_color(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= 400 && mouse.x <= 520 && mouse.y >= 25 &&
        mouse.y <= 85) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            COLOR = sfRed;
        }
    }
    if (mouse.x >= 100 && mouse.x <= 220 && mouse.y >= 25 &&
        mouse.y <= 85) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            COLOR = sfGreen;
        }
    }
    change_color_b(all, mouse);
}

void change_color_b(global_t *all, sfVector2i mouse)
{
    if (mouse.x >= 250 && mouse.x <= 370 && mouse.y >= 25
        && mouse.y <= 85) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            COLOR = sfBlue;
        }
    }
    if (mouse.x >= 550 && mouse.x <= 670 && mouse.y >= 25
        && mouse.y <= 85) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            COLOR = sfBlack;
        }
    }
}
