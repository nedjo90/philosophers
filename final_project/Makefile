SRCS=srcs/ft_atoi.c\
srcs/ft_isdigit.c\
srcs/ft_strlen.c

CC=gcc
CFLAGS= -I . -Wall -Wextra -Werror 
INCLUDES= 
LEAKS= -g -fsanitize=address -fsanitize=undefined -D_FORTIFY_SOURCE=2 
VALGRIND= valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose
OBJS=$(SRCS:.c=.o)
RM=rm -rf
NAME=philosophers.out
MEMCHECK=


all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) philosophers.c $^ $(INCLUDES) $(CFLAGS) $(LEAKS) -o $(NAME) -g3

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIB)

re: fclean all

test: re
	./$(NAME) 1 2 3 4 5

leak: re
	$(VALGRIND) ./$(NAME) 1 2 3 4c 5

.PHONY: all clean fclean re
