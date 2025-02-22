# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/07 03:06:40 by nhan              #+#    #+#              #
#    Updated: 2025/02/15 15:41:27 by nhan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=\

CC=gcc
CFLAGS=-Wall -Wextra -Werror 
INCLUDES=-I . -I ../libft/includes
OBJS=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
NAME=philosopher

all: $(NAME)

$(NAME) : $(OBJS)
	make -C ../libft
#	$(CC) $^ $(CFLAGS) $(INCLUDES) -L../libft -lft -o $(NAME) -g3

memset: $(NAME)
	$(CC) memset_learning.c $(INCLUDES) -L../libft -lft -o memset.out -g3

usleep: $(NAME)
	$(CC) usleep_learning.c $(INCLUDES) -L../libft -lft -o usleep.out -g3

gettimeofday: $(NAME)
	$(CC) gettimeofday_learning.c $(INCLUDES) -L../libft -lft -o gettimeofday.out -g3

pthread: $(NAME)
	$(CC) pthread_learning.c $(INCLUDES) -L../libft -lft -lpthread -D_REENTRANT -o pthread.out -g3

pthread1: $(NAME)
	$(CC) pthread1_learning.c $(INCLUDES) -L../libft -lft -lpthread1 -D_REENTRANT -o pthread1.out -g3
	

clean:
	make clean -C ../libft
	$(RM) $(OBJS)
	$(RM) memset.out
	$(RM) usleep.out
	$(RM) gettimeofday.out
	$(RM) pthread.out
	$(RM) pthread1.out

fclean: clean
	make fclean -C ../libft

re: fclean all

.PHONY: all clean fclean re
