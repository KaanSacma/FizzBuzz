##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

CC = gcc

SRC = src/main.c

OBJ = $(SRC:.c=.o)

RM = rm -f

CFLAGS = -W -Werror -Wall -Wextra -g

NAME = fizzbuzz

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
