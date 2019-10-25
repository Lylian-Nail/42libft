# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperson- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 13:35:26 by lperson-          #+#    #+#              #
#    Updated: 2019/10/15 09:45:53 by lperson-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -I$(INCLUDE)

AR = ar
ARFLAGS = -crs

RM = rm -f
MKDIR = mkdir -p

INCLUDE = ./
HEADERS = $(addprefix $(INCLUDE), \
libft.h)

SRCS = \
ft_bzero.c \
ft_memset.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_calloc.c \
ft_strlen.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strnstr.c \
ft_strdup.c \
ft_atoi.c \
ft_itoa.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_tolower.c \
ft_toupper.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c

SRCS_BONUS = \
ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

.PHONY = all bonus clean fclean re
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

%_bonus.o: %_bonus.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all