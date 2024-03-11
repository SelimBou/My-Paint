/*
** EPITECH PROJECT, 2023
** B-PSU-200-MAR-2-1-minishell1-selim.bouasker
** File description:
** shell_one.h
*/

#ifndef STRUCT_PAINT_
    #define STRUCT_PAINT_

    #define PAINT
    #define BUF_SIZE 1024
    #include <SFML/Graphics.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    #include <signal.h>
    #include <stdlib.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include "struct.h"
    #define WINDOW all->settings.window
    #define MODE all->settings.video_mode
    #define EVENT all->settings.event
    #define IMAGE all->pics
    #define CANVAS all->settings.canvas
    #define BRUSH all->settings.brush


int my_putchar(char c);
int draw_it(global_t *all);
void can(global_t *all);
int my_printf(const char *format, ...);
int my_putstr(char *str);
void cursor(global_t *all);
void can(global_t *all);
void init(global_t *all);
void init_window(global_t *all);
void init_menu(global_t *all);
void init_buttons(global_t *all);
void init_colors(global_t *all);
void init_bckg(global_t *all);
void init_files(global_t *all);
int erease_it(global_t *all);
int my_strlen(char const *str);
void cursor(global_t *all);
char *my_strcpy(char *dest, char *src);
int my_strcmp(const char *str1, const char *str2);
char *my_strdup(char *str);
int my_strncmp(const char *s1, const char *s2, size_t n);
int my_str_isalpha(const char *str);
char *my_strcat(char *dest, char const *src);
#endif
