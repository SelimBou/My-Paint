/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** clean.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void cleanup_buttons(global_t *all)
{
    for (int i = 0; i <= 13; i++) {
        sfSprite_destroy(IMAGE[i].sprite);
    }
    for (int k = 0; k <= 2; k++) {
        sfRectangleShape_destroy(BUTTON[k].rect);
    }
}
