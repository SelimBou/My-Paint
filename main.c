/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "paint.h"

static void close_window(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

int start_paint(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "SFML window",
        sfResize | sfClose, NULL);
    sfRectangleShape* rectangle = sfRectangleShape_create();
    sfEvent event;

    if (!window)
        return 1;
    sfRectangleShape_setSize(rectangle, (sfVector2f){600, 450});
    sfRectangleShape_setFillColor(rectangle, sfWhite);
    sfRectangleShape_setPosition(rectangle, (sfVector2f){95, 75});
    while (sfRenderWindow_isOpen(window)) {
        close_window(window, event);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawRectangleShape(window, rectangle, NULL);
        sfRenderWindow_display(window);
    }
    sfRectangleShape_destroy(rectangle);
    sfRenderWindow_destroy(window);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 1) {
        write(2, "Error in number of args\n", 25);
        return 84;
    } else {
        start_paint();
        return 0;
    }
}
