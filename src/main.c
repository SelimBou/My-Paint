/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

void on_click(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= 800 && mouse.x <= 1100 &&
    mouse.y >= 500 && mouse.y <= 600) {
            if (EVENT.type == sfEvtMouseButtonPressed) {
                printf("succes");
                //game_deco_ennemy(all);
            }
    }
    if (mouse.x >= 800 && mouse.x <= 1100 &&
    mouse.y >= 650 && mouse.y <= 750) {
            if (EVENT.type == sfEvtMouseButtonPressed) {
                sfRenderWindow_close(WINDOW);
            }
    }
}

void close_it(global_t *all)
{
    if (EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(WINDOW);
    }
}

void exit_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= 1750 && mouse.x <= 1880 && mouse.y >= 0 && mouse.y <= 100) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(WINDOW);
        }
    }
}

void clear_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= 1450 && mouse.x <= 1700 && mouse.y >= 0 && mouse.y <= 100) {
        if (EVENT.type == sfEvtMouseButtonReleased) {
            init_bckg(all);
        }
    }
}

void main_menu(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            close_it(all);
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[0].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[1].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[2].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[3].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[4].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[5].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[6].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[7].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[8].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[9].sprite, NULL);
        draw_it(all);
        clear_button(all);
        erease_it(all);
        exit_button(all);
        cursor(all);
        sfRenderWindow_display(WINDOW);
    }
}

int main(int argc, char **argv)
{
    global_t all;

    if (argc != 1) {
        write(2, "Error in number of args\n", 25);
        return 84;
    } else {
        init(&all);
        main_menu(&all);
        return 0;
    }
}
