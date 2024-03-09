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
    sfTexture *canvas_texture = sfRenderTexture_getTexture(CANVAS);
    sfSprite *canvas_sprite = sfSprite_create();

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
    sfSprite_setTexture(canvas_sprite, canvas_texture, sfFalse);
    sfRenderWindow_drawSprite(WINDOW, canvas_sprite, NULL);
    sfSprite_destroy(canvas_sprite);
    return 0;
}
