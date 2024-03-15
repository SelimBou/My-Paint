/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** an recursive function that returns the first argument
** raised to the power p, where p is the second argument
*/

#include <stdio.h>
#include "../include/my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            sign = sign * -1;
        }
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
        } else {
            break;
        }
    }
    return (nb * sign);
}
