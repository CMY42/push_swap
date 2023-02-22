# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:01:18 by cmansey           #+#    #+#              #
#    Updated: 2023/02/22 16:52:13 by cmansey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = main.c check_num.c moves_swap.c moves_push.c moves_rotate.c moves_rev_rotate.c

all: $(NAME)

OBJS = $(SRCS:.c=.o)

LIBFT = libft
PRINTF = printf

CC = gcc
RM = rm -f
AR = ar -rcs

CFLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	$(CC) $^ -Llibft -lft -o $(NAME)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	$(RM) $(NAME)
	@$(RM) -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
