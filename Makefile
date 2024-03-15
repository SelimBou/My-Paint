##
## EPITECH PROJECT, 2023
## B-CPE-110-MAR-1-1-settingup-selim.bouasker
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/init.c	\
		src/draw.c	\
		src/init_b.c	\
		src/init_c.c	\
		src/actions.c	\
		src/actions_b.c	\
		src/animation.c	\
		src/clean.c	\
		src/clickable.c	\
		src/clickable_b.c	\
		src/clickable_c.c	\
		src/animation_b.c	\
		src/open_section.c	\
		lib/mini_printf.c	\
		lib/my_compute_power_rec.c	\
		lib/my_getnbr.c	\
		lib/my_put_nbr.c	\
		lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_strncpy.c	\

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
