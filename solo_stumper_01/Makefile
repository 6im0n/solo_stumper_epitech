##
## EPITECH PROJECT, 2022
## makefile.c
## File description:
## a makefile who that compile my lib/my
##

#Parameters
NAME = clean_str
#LIB = -lmy -lncurses
SRC = 		src/main.c\
			src/clean_str.c

#Global config
CFLAGS = $(INCLUDE_DIR) -W -Wall -Wextra -Wshadow -g3
INCLUDE_DIR = -I ./include
#LIB_DIR = -L./lib
OBJ =   $(SRC:.c=.o)


all: $(NAME)

$(NAME):   $(OBJ)
	#@make -C lib
	#@cd lib/ && make
	gcc $(OBJ) -o $(NAME)
	echo "compile succes"

clean:
	#@cd lib/ && make clean
	@rm -f $(OBJ)

val:
	gcc $(SRC) -g -o a.out
	valgrind ./a.out -R

delval:
	@rm -f vgcore*
	@rm -f a.out

fclean: clean delval
	#@cd lib/ && make fclean
	@rm -f $(NAME)

re:    fclean all
	#@cd lib/ && make re
	@rm -f $(OBJ)
run: all
	./$(NAME)
