/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** A function that copies n characters from a string into another.
** The destination string will already have enough memory
** to contain n characters
*/

#include <stdio.h>
#include "../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && n > i) {
        dest[i] = src[i];
        i++;
    }
    if (n > i) {
        dest[i] = '\0';
    }
    return dest;
}
