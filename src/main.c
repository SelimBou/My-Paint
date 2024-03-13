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

void draw_ui(global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMAGE[0].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[1].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[2].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[3].sprite, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[0].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[1].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[2].rect, NULL);
    //sfRenderWindow_drawSprite(WINDOW, IMAGE[7].sprite, NULL);
    //sfRenderWindow_drawSprite(WINDOW, IMAGE[8].sprite, NULL);
    //sfRenderWindow_drawSprite(WINDOW, IMAGE[9].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[12].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[13].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[14].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[15].sprite, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[16].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[17].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[18].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[19].text, NULL);
}

void all_actions(global_t *all)
{
    draw_ui(all);
    change_color(all);
    exit_button(all);
    if (all->eraser_selected == true) {
        draw_it(all);
        show_it(all);
    } else {
        erease_it(all);
        show_it(all);
    }
    cursor(all);
}

void main_menu(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            close_it(all);
            clear_button(all);
            save_button(all);
            eraser_button(all);
            help_button(all);
        }
        sfRenderWindow_clear(WINDOW, sfWhite);
        hover(all);
        all_actions(all);
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
