# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 15:09:03 by gde-la-r          #+#    #+#              #
#    Updated: 2024/10/15 15:49:39 by gde-la-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Specifies the name of the lib
NAME = libft.a

# Compiler
CC = cc

# Flags for compiling
CFLAGS = -Wall -Wextra -Werror

# Directory paths
SRCS_DIR = srcs
INCLUDES_DIR = includes
MAIN_DIR = .

# Source files
SRCS = $(SRCS_DIR)/ft_putchar.c \
	   $(SRCS_DIR)/ft_putstr.c \
	   $(SRCS_DIR)/ft_strcmp.c \
	   $(SRCS_DIR)/ft_strlen.c \
	   $(SRCS_DIR)/ft_swap.c

# Object files
OBJS = $(SRCS:.c=.o)

# Main source file
MAIN_SRC = $(MAIN_DIR)/main.c
MAIN_OBJ = $(MAIN_SRC:.c=.o)

# All rule
all: $(NAME)

# Compile the lib
$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

# Compile main program
main: $(MAIN_OBJ) $(NAME)
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) $(MAIN_OBJ) -o main $(NAME)

# Test rule
test: main
	./main

# Clean rule
clean:
	rm -f $(OBJS) $(MAIN_OBJ)

# Full clean rule
fclean: clean
	rm -f $(NAME) main

# Rebuild lib
re: fclean all

# Phony targets to avoid name clashes
.PHONY: all clean fclean re main test
