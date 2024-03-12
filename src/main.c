/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

void on_click(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= 800 && mouse.x <= 1100 &&
    mouse.y >= 500 && mouse.y <= 600) {
            if (EVENT.type == sfEvtMouseButtonPressed) {
                printf("succes");
            }
    }
    if (mouse.x >= 800 && mouse.x <= 1100 &&
    mouse.y >= 650 && mouse.y <= 750) {
            if (EVENT.type == sfEvtMouseButtonPressed) {
                sfRenderWindow_close(WINDOW);
            }
    }
}

void close_it(global_t *all)
{
    if (EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(WINDOW);
    }
}

void exit_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= 1750 && mouse.x <= 1880 && mouse.y >= 0 && mouse.y <= 100) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(WINDOW);
        }
    }
}

void clear_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[8].position.x && mouse.x <= IMAGE[8].position.x + 430 &&
        mouse.y >= IMAGE[8].position.y && mouse.y <= IMAGE[8].position.y + 130) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clear_canvas(all);
        }
    }
}

void save_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[7].position.x && mouse.x <= IMAGE[7].position.x + 430 &&
        mouse.y >= IMAGE[7].position.y && mouse.y <= IMAGE[7].position.y + 130) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            save_canvas(all);
        }
    }
}

void eraser_button(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= IMAGE[3].position.x && mouse.x <= IMAGE[3].position.x + 200 &&
        mouse.y >= IMAGE[3].position.y && mouse.y <= IMAGE[3].position.y + 130) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            printf("nope");
            all->eraser_selected = !all->eraser_selected;
        }
    } else if (mouse.x >= IMAGE[2].position.x && mouse.x <= IMAGE[2].position.x + 100 &&
            mouse.y >= IMAGE[2].position.y && mouse.y <= IMAGE[2].position.y + 130) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            printf("yes");
            all->eraser_selected = !all->eraser_selected;
        }
    }
}

void clear_canvas(global_t *all)
{
    sfRenderTexture_clear(CANVAS, sfColor_fromRGBA(0, 0, 0, 0));
    sfRenderTexture_display(CANVAS);
}

/*void save_canvas(global_t *all)
{
    const sfTexture *canvas_texture = sfRenderTexture_getTexture(CANVAS);
    sfImage *canvas_image = sfTexture_copyToImage(canvas_texture);
    sfImage_saveToFile(canvas_image, "saved_drawing.jpg");
    sfImage_destroy(canvas_image);
}*/

void save_canvas(global_t *all)
{
    sfRenderTexture* white_background = sfRenderTexture_create(1920, 970, sfFalse);
    sfRenderTexture_clear(white_background, sfWhite);
    sfTexture* drawing_texture = sfRenderTexture_getTexture(CANVAS);
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

void draw_ui(global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMAGE[0].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[1].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[2].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[3].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[4].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[5].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[6].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[7].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[8].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[9].sprite, NULL);
}

void main_menu(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            close_it(all);
            clear_button(all);
            save_button(all);
            eraser_button(all);
        }
        sfRenderWindow_clear(WINDOW, sfWhite);
        draw_ui(all);
        exit_button(all);
        if (all->eraser_selected) {                                                                                                                                                 
            erease_it(all);
        } else {                                                                                                                                                                    
            draw_it(all);                                                                                                                    
        }                                                                                                                                                                           
        cursor(all);                                                                                                                                                                
        sfRenderWindow_display(WINDOW);                                                                                                                                             
    }                                                                                                                                                                               
 }  

int main(int argc, char **argv)
{
    global_t all;
    all.eraser_selected = false;

    if (argc != 1) {
        write(2, "Error in number of args\n", 25);
        return 84;
    } else {
        init(&all);
        main_menu(&all);
        return 0;
    }
}
