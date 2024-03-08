/*
** EPITECH PROJECT, 2023
** B-PSU-200-MAR-2-1-minishell1-selim.bouasker
** File description:
** my_strcat.c
*/
#include "../include/my.h"

char *my_strcat(char *dest , char const *src)
{
    int i = 0;
    int len = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[len] != '\0') {
        dest[i] = src[len];
        i++;
        len++;
    }
    dest[i] = '\0';
    return dest;
}

