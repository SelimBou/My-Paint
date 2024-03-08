/*
** EPITECH PROJECT, 2023
** B-PSU-200-MAR-2-1-minishell1-selim.bouasker
** File description:
** shell_one.h
*/

#ifndef PAINT
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
typedef struct params {
    char **token_list;
    int number_token;
    char *new_value;
    char *copy;
    char *token;
} params_t;
int my_putchar(char c);
int my_printf(const char *format, ...);
int my_putstr(char *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char *src);
int my_strcmp(const char *str1, const char *str2);
char *my_strdup(char *str);
int my_strncmp(const char *s1, const char *s2, size_t n);
int my_str_isalpha(const char *str);
char *my_strcat(char *dest , char const *src);
#endif
