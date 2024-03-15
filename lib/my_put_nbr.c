/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** A function that put numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int length(int nb)
{
    int len = 0;
    int number = nb;

    if (nb == 0) {
        len = 1;
    }
    while (number > 0) {
        len++;
        number = number / 10;
    }
    return len;
}

int my_put_nbr(int nb)
{
    int len = length(nb);
    char temp = '0';
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    for (i = len; i > 0; i--) {
        temp = nb / my_compute_power_rec(10, i - 1);
        my_putchar(temp + 48);
        nb = nb % my_compute_power_rec(10, i - 1);
    }
    return 0;
}
