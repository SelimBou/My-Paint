/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

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
    sfSprite *rect = sfSprite_create();
    sfImage *rectangle = sfImage_createFromColor(600, 450, sfWhite);
    sfTexture *rectangle_t = sfTexture_createFromImage(rectangle, sfFalse);
    sfEvent event;

    sfSprite_setTexture(rect, rectangle_t, sfFalse);
    if (!window)
        return 1;
    sfSprite_setPosition(rect, (sfVector2f){95, 75});
    while (sfRenderWindow_isOpen(window)) {
        close_window(window, event);
        sfRenderWindow_clear(window, sfColor_fromRGB(190, 190, 190));
        sfRenderWindow_drawSprite(window, rect, NULL);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(rect);
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
