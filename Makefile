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

SRC = 	src/bubble_sort_array.c \
		src/bubble_sort.c \
		src/my_getnbr.c \
		src/main.c \
		src/my_putchar.c \

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