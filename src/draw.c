/*
** EPITECH PROJECT, 2024
** draw.c
** File description:
** my_paint
*/

#include "../include/my.h"

int draw_it(global_t *all)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(WINDOW);

    drawings(all);
    all->settings.brush = sfCircleShape_create();
    sfCircleShape_setRadius(all->settings.brush, 5);
    sfCircleShape_setFillColor(all->settings.brush, COLOR);
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (mouse_pos.x >= 0 && mouse_pos.x <= 1980 &&
        mouse_pos.y >= 110 && mouse_pos.y <= 1080) {
            mouse_pos = sfMouse_getPositionRenderWindow(WINDOW);
            sfCircleShape_setPosition(BRUSH,
            (sfVector2f){mouse_pos.x, mouse_pos.y});
            sfRenderTexture_drawCircleShape(CANVAS, BRUSH, NULL);
            sfRenderTexture_display(CANVAS);
        }
    }
    return 0;
}

int erease_it(global_t *all)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(WINDOW);

    drawings(all);
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (mouse_pos.x >= 0 && mouse_pos.x <= 1980 &&
        mouse_pos.y >= 110 && mouse_pos.y <= 1080) {
            sfCircleShape_setFillColor(BRUSH, sfWhite);
            sfCircleShape_setPosition(BRUSH,
            (sfVector2f){mouse_pos.x, mouse_pos.y});
            sfRenderTexture_drawCircleShape(CANVAS, BRUSH, NULL);
            sfRenderTexture_display(CANVAS);
            sfCircleShape_setFillColor(BRUSH, sfBlack);
        }
    }
    return 0;
}
