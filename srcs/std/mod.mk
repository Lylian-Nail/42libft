SRCS += $(addprefix $(PATHS_STD), \
ft_atoi.c \
ft_itoa.c \
ft_itoa_buff.c \
ft_count_digits.c \
ft_initenv.c \
ft_clearenv.c \
ft_getenv.c \
ft_setenv.c \
ft_unsetenv.c)

$(PATHB)%.o: $(PATHS_STD)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@