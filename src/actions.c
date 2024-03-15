/*
** EPITECH PROJECT, 2023
** actions
** File description:
** action.c
*/

#include "../include/my.h"

void clear_canvas(global_t *all)
{
    sfRenderTexture_clear(CANVAS, sfColor_fromRGBA(0, 0, 0, 0));
    sfRenderTexture_display(CANVAS);
}

void prepare_canvas(global_t *all, sfRenderTexture* white_background,
    sfSprite* drawing_sprite)
{
    sfTexture* drawing_texture;
    sfFloatRect bounds;

    sfRenderTexture_clear(white_background, sfWhite);
    drawing_texture = (sfTexture*)sfRenderTexture_getTexture(CANVAS);
    sfSprite_setTexture(drawing_sprite, drawing_texture, sfTrue);
    bounds = sfSprite_getLocalBounds(drawing_sprite);
    sfSprite_setOrigin(drawing_sprite, (sfVector2f){bounds.width / 2,
        bounds.height / 2});
    sfSprite_setPosition(drawing_sprite, (sfVector2f){bounds.width / 2,
        bounds.height / 2});
    sfSprite_setScale(drawing_sprite, (sfVector2f){1, -1});
    sfRenderTexture_drawSprite(white_background, drawing_sprite, NULL);
}

void save_canvas(global_t *all)
{
    sfRenderTexture* white_background;
    sfSprite* drawing_sprite;
    const sfTexture *canvas_texture;
    sfImage *canvas_image;

    white_background = sfRenderTexture_create(1920, 970, sfFalse);
    drawing_sprite = sfSprite_create();
    prepare_canvas(all, white_background, drawing_sprite);
    canvas_texture = sfRenderTexture_getTexture(white_background);
    canvas_image = sfTexture_copyToImage(canvas_texture);
    sfImage_saveToFile(canvas_image, "saved_drawing.jpg");
    sfSprite_destroy(drawing_sprite);
    sfImage_destroy(canvas_image);
    sfRenderTexture_destroy(white_background);
}
