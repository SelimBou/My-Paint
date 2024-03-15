/*
** EPITECH PROJECT, 2023
** mini_printf.c
** File description:
** That function has to print all the characters in the string
** format and print variable when % is used before
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"

int switch_case_di(va_list characters)
{
    int integer = (int) va_arg(characters, int);

    my_put_nbr(integer);
    return 0;
}

int switch_case_s(va_list characters)
{
    const char *string = (const char *) va_arg(characters, const char *);

    my_putstr(string);
    return 0;
}

int switch_first(const char *format, va_list characters)
{
    switch (*format) {
    case 'd':
    case 'i':
        switch_case_di(characters);
        break;
    case 's':
        switch_case_s(characters);
        break;
    case 'c':
        my_putchar(va_arg(characters, int));
        break;
    case '%':
        my_putchar(37);
        break;
    default:
        return 1;
    }
    return 0;
}

int mini_printf(const char *format, ...)
{
    va_list characters;
    char str;

    va_start(characters, format);
    while (*format != '\0') {
        str = *format;
        format++;
        if (str != '%') {
            my_putchar(str);
        } else {
            switch_first(format, characters);
            format++;
        }
        str = *format;
    }
    va_end(characters);
    return 0;
}
