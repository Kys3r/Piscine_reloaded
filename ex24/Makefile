# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albarbos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 11:10:06 by albarbos          #+#    #+#              #
#    Updated: 2017/11/07 11:10:08 by albarbos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY: all, clean, fclean, re

NAME = libft.a

SRCS_DIR = ./srcs
INC_DIR = ./includes/

RAW_SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ = $(RAW_SRCS:.c=.o)

SRCS = $(addprefix $(SRCS_DIR)/,$(RAW_SRCS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@rm -f $(OBJ)

$(OBJ):
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $(SRCS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all