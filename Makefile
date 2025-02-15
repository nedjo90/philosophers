# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/07 03:06:40 by nhan              #+#    #+#              #
#    Updated: 2025/02/15 11:51:40 by nhan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=\

CC=gcc
CFLAGS=-I ./includes -I ./libft/includes -Wall -Wextra -Werror 
INCLUDES=
OBJS=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
NAME=philosopher
MEMCHECK=


all: $(NAME)

$(NAME) : $(OBJS)
	make -C ./libft
#	$(CC) $^ $(CFLAGS) -L./libft -lft -o $(NAME) -g3

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
