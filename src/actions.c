/*
** EPITECH PROJECT, 2023
** actions
** File description:
** action.c
*/

#include "../include/my.h"

void clear_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[14].position.x &&
    mouse.x <= IMAGE[14].position.x + 120 &&
    mouse.y >= IMAGE[14].position.y &&
    mouse.y <= IMAGE[14].position.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clear_canvas(all);
        }
    }
}

void help_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[13].position.x &&
    mouse.x <= IMAGE[13].position.x + 120 &&
    mouse.y >= IMAGE[13].position.y &&
    mouse.y <= IMAGE[13].position.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            return;
        }
    }
}

void save_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[15].position.x &&
    mouse.x <= IMAGE[15].position.x + 120 &&
    mouse.y >= IMAGE[15].position.y &&
    mouse.y <= IMAGE[15].position.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            save_canvas(all);
        }
    }
}

void eraser_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[3].position.x &&
    mouse.x <= IMAGE[3].position.x + 200 &&
    mouse.y >= IMAGE[3].position.y &&
    mouse.y <= IMAGE[3].position.y + 100) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->eraser_selected = !all->eraser_selected;
        }
    } else if (mouse.x >= IMAGE[2].position.x
    && mouse.x <= IMAGE[2].position.x + 100 &&
    mouse.y >= IMAGE[2].position.y &&
    mouse.y <= IMAGE[2].position.y + 100) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->eraser_selected = !all->eraser_selected;
        }
    }
}

void clear_canvas(global_t *all)
{
    sfRenderTexture_clear(CANVAS, sfColor_fromRGBA(0, 0, 0, 0));
    sfRenderTexture_display(CANVAS);
}

void save_canvas(global_t *all)
{
    sfRenderTexture* white_background = sfRenderTexture_create(1920, 970, sfFalse);
    sfRenderTexture_clear(white_background, sfWhite);
    sfTexture* drawing_texture = (sfTexture*)sfRenderTexture_getTexture(CANVAS);
    sfSprite* drawing_sprite = sfSprite_create();
    sfSprite_setTexture(drawing_sprite, drawing_texture, sfTrue);
    sfFloatRect bounds = sfSprite_getLocalBounds(drawing_sprite);
    sfSprite_setOrigin(drawing_sprite, (sfVector2f){bounds.width / 2, bounds.height / 2});
    sfSprite_setPosition(drawing_sprite, (sfVector2f){bounds.width / 2, bounds.height / 2});
    sfSprite_setScale(drawing_sprite, (sfVector2f){1, -1});
    sfRenderTexture_drawSprite(white_background, drawing_sprite, NULL);
    const sfTexture *canvas_texture = sfRenderTexture_getTexture(white_background);
    sfImage *canvas_image = sfTexture_copyToImage(canvas_texture);
    sfImage_saveToFile(canvas_image, "saved_drawing.jpg");
    sfSprite_destroy(drawing_sprite);
    sfImage_destroy(canvas_image);
    sfRenderTexture_destroy(white_background);
}
