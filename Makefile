# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 13:35:26 by lperson-          #+#    #+#              #
#    Updated: 2020/02/04 11:45:17 by lperson-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -I$(INCLUDE)
CFLAGS += -g

AR = ar
ARFLAGS = -crs

RM = rm -rf
MKDIR = mkdir -p
MAKE = make -C -s

INCLUDE = headers/
HEADERS = $(addprefix $(INCLUDE), \
libft.h)

PATHB = build/
PATHS = srcs/
PATHS_STR = $(addprefix $(PATHS), string/)
PATHS_CTYPE = $(addprefix $(PATHS), ctype/)
PATHS_IO = $(addprefix $(PATHS), io/)
PATHS_STD = $(addprefix $(PATHS), std/)
PATHS_LST = $(addprefix $(PATHS), list/)
PATHS_VEC = $(addprefix $(PATHS), v_array/)
PATHS_DICT = $(addprefix $(PATHS), dict/)
PATHS_BTREE = $(addprefix $(PATHS), btree/)

include $(addprefix $(PATHS_STR), mod.mk)
include $(addprefix $(PATHS_CTYPE), mod.mk)
include $(addprefix $(PATHS_IO), mod.mk)
include $(addprefix $(PATHS_STD), mod.mk)
include $(addprefix $(PATHS_LST), mod.mk)
include $(addprefix $(PATHS_VEC), mod.mk)
include $(addprefix $(PATHS_DICT), mod.mk)
include $(addprefix $(PATHS_BTREE), mod.mk)

OBJS = $(addprefix $(PATHB), $(notdir $(SRCS:.c=.o)))

.PHONY = all bonus clean fclean re
all: $(NAME)

$(NAME): $(PATHB) $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

$(PATHB):
	$(MKDIR) $(PATHB)

clean:
	$(RM) $(PATHB)

fclean: clean
	$(RM) $(NAME)

re: fclean all