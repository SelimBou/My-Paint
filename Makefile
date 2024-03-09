##
## EPITECH PROJECT, 2023
## B-CPE-110-MAR-1-1-settingup-selim.bouasker
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/init.c	\
		src/draw.c	\
		lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_printf.c	\
		lib/my_strlen.c	\
		lib/my_strdup.c	\
		lib/strcmp.c	\
		lib/my_str_isalpha.c	\
		lib/strncmp.c	\
		lib/my_strcpy.c	\
		lib/my_strcat.c	\

OBJ = $(SRC:.c=.o)

CFLAGS = -g3 -Wall

NAME = libmy.a

CSFML = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

OBJ = $(SRC:.c=.o)

NAME = my_paint

all : $(NAME)

$(NAME): $(OBJ)
	gcc	$(CFLAGS) -o	$(NAME)	-I./include	$(OBJ)	$(CSFML)
	make clean

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	clean fclean re all
