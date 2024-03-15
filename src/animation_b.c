/*
** EPITECH PROJECT, 2023
** animation
** File description:
** animation.c
*/

#include "../include/my.h"

void init_button_0_to_2(global_t *all)
{
    BUTTON[0].buttoncol = sfRed;
    BUTTON[0].pos.x = 400;
    BUTTON[0].pos.y = 25;
    BUTTON[1].buttoncol = sfBlue;
    BUTTON[1].pos.x = 250;
    BUTTON[1].pos.y = 25;
    BUTTON[2].buttoncol = sfGreen;
    BUTTON[2].pos.x = 100;
    BUTTON[2].pos.y = 25;
}

void init_button_3_to_6(global_t *all)
{
    BUTTON[3].buttoncol = sfBlack;
    BUTTON[3].pos.x = 1350;
    BUTTON[3].pos.y = 25;
    BUTTON[4].buttoncol = sfBlack;
    BUTTON[4].pos.x = 1480;
    BUTTON[4].pos.y = 25;
    BUTTON[5].buttoncol = sfBlack;
    BUTTON[5].pos.x = 1610;
    BUTTON[5].pos.y = 25;
    BUTTON[6].buttoncol = sfBlack;
    BUTTON[6].pos.x = 1740;
    BUTTON[6].pos.y = 25;
}

void init_button_7_to_10(global_t *all)
{
    BUTTON[7].buttoncol = sfBlack;
    BUTTON[7].pos.x = 1350;
    BUTTON[7].pos.y = 110;
    BUTTON[8].buttoncol = sfBlack;
    BUTTON[8].pos.x = 1350;
    BUTTON[8].pos.y = 190;
    BUTTON[9].buttoncol = sfBlack;
    BUTTON[9].pos.x = 1350;
    BUTTON[9].pos.y = 270;
    BUTTON[10].buttoncol = sfBlack;
    BUTTON[10].pos.x = 1480;
    BUTTON[10].pos.y = 110;
}

void init_button_11_to_15(global_t *all)
{
    BUTTON[11].buttoncol = sfBlack;
    BUTTON[11].pos.x = 1480;
    BUTTON[11].pos.y = 190;
    BUTTON[12].buttoncol = sfBlack;
    BUTTON[12].pos.x = 1610;
    BUTTON[12].pos.y = 110;
    BUTTON[13].buttoncol = sfBlack;
    BUTTON[13].pos.x = 1610;
    BUTTON[13].pos.y = 190;
    BUTTON[14].buttoncol = sfBlack;
    BUTTON[14].pos.x = 550;
    BUTTON[14].pos.y = 25;
    BUTTON[15].buttoncol = sfColor_fromRGB(128, 128, 0);
    BUTTON[15].pos.x = 810;
    BUTTON[15].pos.y = 400;
}

void init_col_pos(global_t *all)
{
    init_button_0_to_2(all);
    init_button_3_to_6(all);
    init_button_7_to_10(all);
    init_button_11_to_15(all);
}
