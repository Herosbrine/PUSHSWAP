##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

RM	=	 rm -rf

CFLAGS = -W -Wall -Wextra

NAME = push_swap

SRC =	src/pushswap.c \
		src/my_getnbr.c \
		src/my_putchar.c \
		src/pa_fonction.c \
		src/pb_fonction.c \
		src/main.c \
		src/ra_fonction.c \
		src/rb_fonction.c \
		src/tall_la_number.c \
		src/tall_lb_number.c \

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
	rm -f *.g*
	rm -f unit_test

fclean: clean
	rm -f $(NAME)

re:	fclean all