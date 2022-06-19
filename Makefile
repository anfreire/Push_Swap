# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 14:59:21 by anfreire          #+#    #+#              #
#    Updated: 2022/06/07 23:29:40 by anfreire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = $(wildcard *.c) $(wildcard ./libftprintf/*.c) $(wildcard ./errors/*.c) \
	$(wildcard ./sorts/*.c) $(wildcard ./stacks/*.c)
            
CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

FLAGS		= -Wall -Wextra -Werror

all			:	$(NAME)

$(NAME)		:	$(OBJS)
		@gcc -o $(NAME) $(OBJS)
		@echo	"\n$$ ./push_swap && Object Files Generated\n"
%.o			:	%.c
		@gcc $(FLAGS) -c $^ -I./ -o $@

clean		:
		@rm -f $(OBJS)
		@echo	"\n$$ Object Files Deleted\n"

fclean		:	clean
		@rm -f $(NAME)
		@echo	"\n$$ ./push_swap Deleted\n"

re			:	fclean all

.PHONY		:	all clean fclean re bonus