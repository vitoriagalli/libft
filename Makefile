# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscabell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 08:54:07 by vscabell          #+#    #+#              #
#    Updated: 2020/02/01 17:57:32 by vscabell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_itoa.c	ft_putstr_fd.c	ft_strnstr.c \
 	ft_memccpy.c ft_split.c	ft_strrchr.c \
	ft_atoi.c ft_memchr.c ft_strchr.c ft_strtrim.c \
	ft_bzero.c ft_memcmp.c ft_strdup.c ft_substr.c \
	ft_calloc.c	ft_memcpy.c	ft_strjoin.c ft_tolower.c \
	ft_isalnum.c ft_memmove.c ft_strlcat.c ft_toupper.c \
	ft_isalpha.c ft_memset.c ft_strlcpy.c \
	ft_isascii.c ft_putchar_fd.c ft_strlen.c \
	ft_isdigit.c ft_putendl_fd.c ft_strmapi.c \
	ft_isprint.c ft_putnbr_fd.c	ft_strncmp.c \

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ = ft_itoa.o	ft_putstr_fd.o	ft_strnstr.o \
 	ft_memccpy.o ft_split.o	ft_strrchr.o \
	ft_atoi.o ft_memchr.o ft_strchr.o ft_strtrim.o \
	ft_bzero.o ft_memcmp.o ft_strdup.o ft_substr.o \
	ft_calloc.o	ft_memcpy.o	ft_strjoin.o ft_tolower.o \
	ft_isalnum.o ft_memmove.o ft_strlcat.o ft_toupper.o \
	ft_isalpha.o ft_memset.o ft_strlcpy.o \
	ft_isascii.o ft_putchar_fd.o ft_strlen.o \
	ft_isdigit.o ft_putendl_fd.o ft_strmapi.o \
	ft_isprint.o ft_putnbr_fd.o	ft_strncmp.o \

OBJ_BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o \
	ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o \
	ft_lstclear.o ft_lstiter.o ft_lstmap.o \

INCLUDES = libft.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra -c

RM = /bin/rm -f

$(NAME):
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

bonus: $(NAME) $(OBJ_BONUS)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRC_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
