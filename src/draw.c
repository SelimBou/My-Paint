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
    static sfVector2i last_pos = {-1, -1};

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (mouse_pos.x >= 0 && mouse_pos.x <= 1980 &&
        mouse_pos.y >= 110 && mouse_pos.y <= 1080) {
            if (last_pos.x != -1 && last_pos.y != -1) {
                sfVertex line[] = {
                    {.position = sfCircleShape_getPosition(BRUSH), 
                    .color = sfBlack}, {.position = {mouse_pos.x, mouse_pos.y},
                    .color = sfBlack}
                };
                sfRenderTexture_drawPrimitives(CANVAS, line, 2, sfLines, NULL);
            }
            sfCircleShape_setPosition(BRUSH,
            (sfVector2f){mouse_pos.x, mouse_pos.y});
            sfRenderTexture_display(CANVAS);
            last_pos = mouse_pos;
        }
    } else {
        last_pos = (sfVector2i){-1, -1};
    }
    sfSprite_setTexture(canvas_sprite, canvas_texture, sfFalse);
    sfRenderWindow_drawSprite(WINDOW, canvas_sprite, NULL);
    sfSprite_destroy(canvas_sprite);
    return 0;
}

int erease_it(global_t *all)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(WINDOW);
    if (sfMouse_isButtonPressed(sfMouseRight)) {
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
