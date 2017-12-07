.PHONY: all, clean, fclean, re

NAME = ft_display_file

SRCS_DIR = ./srcs
INC_DIR = ./includes/

RAW_SRCS =\
		  ft_display_file.c

OBJ = $(RAW_SRCS:.c=.o)

SRCS = $(addprefix $(SRCS_DIR)/,$(RAW_SRCS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@rm -f $(OBJ)

$(OBJ):
	@$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all