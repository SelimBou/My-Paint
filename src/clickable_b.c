/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

void clickable_section_exit(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[23].position.x &&
    mouse.x <= IMAGE[23].position.x + 75 &&
    mouse.y >= IMAGE[23].position.y &&
    mouse.y <= IMAGE[23].position.y + 20 && all->clicked_exit == true) {
        save_canvas(all);
        if (EVENT.type == sfEvtMouseButtonPressed)
            sfRenderWindow_close(WINDOW);
    }
    if (mouse.x >= IMAGE[24].position.x &&
    mouse.x <= IMAGE[24].position.x + 75 &&
    mouse.y >= IMAGE[24].position.y &&
    mouse.y <= IMAGE[24].position.y + 20 && all->clicked_exit == true) {
        if (EVENT.type == sfEvtMouseButtonPressed)
            sfRenderWindow_close(WINDOW);
    }
}

void clickable_section_file(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[7].pos.x && mouse.x <= BUTTON[7].pos.x + 120 &&
    mouse.y >= BUTTON[7].pos.y && mouse.y <= BUTTON[7].pos.y + 60 &&
    all->clicked_file == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clear_canvas(all);
        }
    }
    if (mouse.x >= BUTTON[8].pos.x && mouse.x <= BUTTON[8].pos.x + 120 &&
    mouse.y >= BUTTON[8].pos.y && mouse.y <= BUTTON[8].pos.y + 60 &&
    all->clicked_file == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            save_canvas(all);
        }
    }
    clickable_section_file_b(all, mouse);
}

void clickable_section_file_b(global_t *all, sfVector2i mouse)
{
    FILE *file;

    if (mouse.x >= BUTTON[10].pos.x && mouse.x <= BUTTON[10].pos.x + 120 &&
    mouse.y >= BUTTON[10].pos.y && mouse.y <= BUTTON[10].pos.y + 60 &&
    all->clicked_file == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            file = fopen("../saved_drawing.jpg", "w");
            fclose(file);
        }
    }
}

void clickable_section_edit(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[10].pos.x && mouse.x <= BUTTON[10].pos.x + 120 &&
    mouse.y >= BUTTON[10].pos.y && mouse.y <= BUTTON[10].pos.y + 60 &&
    all->clicked_edit == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->pen_selected = true;
        }
    }
    if (mouse.x >= BUTTON[11].pos.x && mouse.x <= BUTTON[11].pos.x + 120 &&
    mouse.y >= BUTTON[11].pos.y && mouse.y <= BUTTON[11].pos.y + 60 &&
    all->clicked_edit == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->pen_selected = false;
        }
    }
}

void clickable_section_help(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[12].pos.x && mouse.x <= BUTTON[12].pos.x + 120 &&
    mouse.y >= BUTTON[12].pos.y && mouse.y <= BUTTON[12].pos.y + 60 &&
    all->clicked_help == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            mini_printf("Login: Rares et Selim\n");
            sleep(1);
        }
    }
    if (mouse.x >= BUTTON[13].pos.x && mouse.x <= BUTTON[13].pos.x + 120 &&
    mouse.y >= BUTTON[13].pos.y && mouse.y <= BUTTON[13].pos.y + 60 &&
    all->clicked_help == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            mini_printf("File section: clear, save, open\nEdit section: pen,");
            mini_printf(" eraser\nHelp section: login, software help");
            sleep(1);
        }
    }
}
