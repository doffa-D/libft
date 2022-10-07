# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 12:21:10 by hdagdagu          #+#    #+#              #
#    Updated: 2022/10/07 17:12:44 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =ft_calloc.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_isalnum.c \
	ft_memcmp.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_strlcpy.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_isascii.c \
	ft_memset.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_strdup.c \
	ft_memmove.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_atoi.c \
	
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
BIN = libft.a
AR = ar rcs

all: $(BIN)

$(BIN): $(OBJ)
	$(AR) $@ $^
%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@ 

fclean:
	rm -rf $(BIN) $(OBJ)
clean:
	rm -rf $(OBJ)
re:fclean $(BIN)
