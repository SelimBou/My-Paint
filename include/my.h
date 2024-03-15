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
    #include <SFML/System.h>
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
    #define COLOR all->settings.color
    #define FONT all->settings.font
    #define TEXT all->pics.text
    #define BUTTON all->button

void display_save_prompt(sfRenderWindow* window, global_t *all);
void init_button(global_t *all, int i, sfVector2f position, sfColor color);
void close_it(global_t *all);
int draw_it(global_t *all);
void can(global_t *all);
void cursor(global_t *all);
void can(global_t *all);
void init(global_t *all);
void init_window(global_t *all);
void init_menu(global_t *all);
void init_buttons(global_t *all);
void init_colors(global_t *all);
int erease_it(global_t *all);
void clear_canvas(global_t *all);
void save_canvas(global_t *all);
void save_canvas(global_t *all);
void cursor(global_t *all);
void exit_button(global_t *all);
void change_color_b(global_t *all, sfVector2i mouse);
void drawings(global_t *all);
void hover(global_t *all);
void pressed(global_t *all, int i);
void verify_click(global_t *all);
void show_it(global_t *all);
void clear_canvas(global_t *all);
void change_color(global_t *all);
void init_col_pos(global_t *all);
void cleanup_buttons(global_t *all);
void main_menu(global_t *all);
#endif
