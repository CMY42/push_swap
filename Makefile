# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:01:18 by cmansey           #+#    #+#              #
#    Updated: 2022/12/14 11:25:49 by cmansey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =

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
	@make -C $(PRINTF)
	@cp libft/libft.a .
	@cp printf/libftprintf.a .
	@mv libft.a $(NAME)
	@mv printf.a $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	$(RM) $(NAME)
	@$(RM) -f $(LIBFT)/libft.a
	@$(RM) -f $(PRINTF)/libftprintf.a

re: fclean all

.PHONY: all clean fclean re
