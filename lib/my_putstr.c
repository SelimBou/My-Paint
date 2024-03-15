/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** A function that displays, one-by-one,
** the characters of a string.
*/

#include <stdio.h>
#include "../include/my.h"

int my_putstr(char const *str)
{
    int nb;

    nb = 0;
    while (str[nb] != '\0') {
        my_putchar(str[nb]);
        nb = nb + 1;
    }
    return 0;
}
