SRCS=srcs/ft_atoi.c\
srcs/ft_isdigit.c\
srcs/ft_strlen.c\

CC=gcc
CFLAGS=-I . -Wall -Wextra -Werror 
INCLUDES=
OBJS=$(SRCS:.c=.o)
RM=rm -rf
NAME=philosophers
MEMCHECK=


all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) pĥilosophers.c $(INCLUDES) $^ $(CFLAGS) -o $(NAME) -g3

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
