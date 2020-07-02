##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=       src/block.c			\
				src/calloc.c		\
				src/free.c			\
				src/my_malloc.c		\
				src/realloc.c		\
				src/reallocarray.c	\

OBJ		=       $(SRC:.c=.o)

TEST	=       src/block.c			\
				src/calloc.c		\
				src/free.c			\
				src/my_malloc.c		\
				src/realloc.c		\
				src/reallocarray.c	\
				unit_tests.c		\

CC		=		gcc -I./include -fPIC

NAME	=		libmy_malloc.so

C_FLAGS	=		-W -Wall -Werror -Wextra -pedantic -g3

all:	$(NAME)

tests_run:	$(TEST)
		$(CC) -o unit_tests $(TEST) -lcriterion --coverage -D DEBUG
		./unit_tests | gcovr

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -shared

debug:
		gcc -shared -I./include -fPIC src/*.c -D DEBUG -o libmy_malloc.so

clean:
		rm -f $(shell find $(SOURCEDIR) -name '*.o')
		rm -f $(shell find $(SOURCEDIR) -name '*~')
		rm -f $(shell find $(SOURCEDIR) -name '*#')
		rm -f $(shell find $(SOURCEDIR) -name '*vg*')
		rm -f $(shell find $(SOURCEDIR) -name '*.gc*')


fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all tests_run clean fclean re