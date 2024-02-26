##
## EPITECH PROJECT, 2023
## B-CPE-110-MAR-1-1-settingup-selim.bouasker
## File description:
## Makefile
##

SRC	=	main.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_printf.c	\
		my_strlen.c	\
		my_strdup.c	\
		strcmp.c	\
		my_str_isalpha.c	\
		strncmp.c	\
		my_strcpy.c	\
		my_strcat.c	\

OBJ	=	$(SRC:.c=.o)

NAME	= my_paint

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) -I../includes $(CSFML) -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
