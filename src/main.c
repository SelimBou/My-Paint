/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

void close_it(global_t *all)
{
    if (EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(WINDOW);
    }
}

void main_menu(global_t *all)
{
    sfRenderWindow_clear(WINDOW, sfBlack);
    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            close_it(all);
        }
        sfRenderWindow_drawSprite(WINDOW, IMAGE[0].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[1].sprite, NULL);
        cursor(all);
        draw_it(all);
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
