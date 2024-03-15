/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

void verify_click_file_edit(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[3].pos.x && mouse.x <= BUTTON[3].pos.x + 120 &&
        mouse.y >= BUTTON[3].pos.y && mouse.y <= BUTTON[3].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->clicked_file = !all->clicked_file;
            all->clicked_edit = false;
            all->clicked_help = false;
        }
    }
    if (mouse.x >= BUTTON[4].pos.x && mouse.x <= BUTTON[4].pos.x + 120 &&
        mouse.y >= BUTTON[4].pos.y && mouse.y <= BUTTON[4].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->clicked_edit = !all->clicked_edit;
            all->clicked_file = false;
            all->clicked_help = false;
        }
    }
}

void verify_click_help_exit(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[5].pos.x && mouse.x <= BUTTON[5].pos.x + 120 &&
        mouse.y >= BUTTON[5].pos.y && mouse.y <= BUTTON[5].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->clicked_help = !all->clicked_help;
            all->clicked_edit = false;
            all->clicked_file = false;
        }
    }
    if (mouse.x >= BUTTON[6].pos.x && mouse.x <= BUTTON[6].pos.x + 120 &&
        mouse.y >= BUTTON[6].pos.y && mouse.y <= BUTTON[6].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->clicked_exit = !all->clicked_exit;
            all->clicked_help = false;
            all->clicked_edit = false;
            all->clicked_file = false;
        }
    }
}

void verify_click(global_t *all)
{
    verify_click_file_edit(all);
    verify_click_help_exit(all);
}
