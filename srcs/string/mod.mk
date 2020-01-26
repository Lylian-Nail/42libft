SRCS += $(addprefix $(PATHS_STR), \
ft_memset.c \
ft_bzero.c \
ft_calloc.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_memdup.c \
ft_memdel.c \
ft_crealloc.c \
ft_strdel.c \
ft_strlen.c \
ft_strnlen.c \
ft_strclen.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strdup.c \
ft_strndup.c \
ft_strcdup.c \
ft_strjoin.c \
ft_strcjoin.c \
ft_strtrim.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_strnstr.c \
ft_substr.c \
ft_split.c \
ft_strmapi.c \
ft_append_buffer.c \
ft_strjoin_sep.c)

$(PATHB)%.o: $(PATHS_STR)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@