# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/11 03:11:35 by yhasegaw          #+#    #+#              #
#    Updated: 2020/11/01 01:28:56 by yhasegaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADER := libft.h
AR := ar cr
RM := rm -f
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRCS := ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strnstr.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c\

BONUS_SRCS := ft_lstnew.c\
    ft_lstadd_front.c\
    ft_lstsize.c\
    ft_lstlast.c\
    ft_lstadd_back.c\
    ft_lstdelone.c\
    ft_lstclear.c\
    ft_lstiter.c\
    ft_lstmap.c\

BONUS_OBJS := $(BONUS_SRCS:.c=.o)

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HEADER)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: all $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
