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

static void draw_ui(global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMAGE[0].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[1].sprite, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[0].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[1].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[2].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[3].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[4].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[5].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[6].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[14].rect, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[14].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[15].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[16].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[17].text, NULL);
}

void all_actions(global_t *all)
{
    draw_ui(all);
    change_color(all);
    if (all->pen_selected == true) {
        draw_it(all);
        show_it(all);
    } else {
        erease_it(all);
        show_it(all);
    }
    clickable_section(all);
    open_section(all);
}

void main_menu(global_t *all)
{
    all->clicked_file = false;
    all->clicked_edit = false;
    all->clicked_help = false;
    all->clicked_exit = false;
    all->pen_selected = true;
    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            close_it(all);
            verify_click(all);
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
