/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

void open_section_edit(global_t *all)
{
    if (all->clicked_edit == true) {
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[10].rect, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[2].sprite, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[11].rect, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[3].sprite, NULL);
    } else {
        sfRectangleShape_destroy(BUTTON[10].rect);
        sfRectangleShape_destroy(BUTTON[11].rect);
    }
}

void open_section_file(global_t *all)
{
    if (all->clicked_file == true) {
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[7].rect, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[8].rect, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[9].rect, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[18].text, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[19].text, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[20].text, NULL);
    } else {
        sfRectangleShape_destroy(BUTTON[7].rect);
        sfRectangleShape_destroy(BUTTON[8].rect);
        sfRectangleShape_destroy(BUTTON[9].rect);
    }
}

void open_section_help_exit(global_t *all)
{
    if (all->clicked_help == true) {
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[12].rect, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[13].rect, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[21].text, NULL);
    } else {
        sfRectangleShape_destroy(BUTTON[12].rect);
        sfRectangleShape_destroy(BUTTON[13].rect);
    }
    if (all->clicked_exit == true) {
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[15].rect, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[22].text, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[23].text, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[24].text, NULL);
    }
}

void open_section(global_t *all)
{
    open_section_edit(all);
    open_section_file(all);
    open_section_help_exit(all);
}
