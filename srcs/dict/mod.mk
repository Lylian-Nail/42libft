SRCS += $(addprefix $(PATHS_DICT), \
ft_dict_new.c \
ft_dict_getkey.c \
ft_dict_setkey.c \
ft_dict_clear.c)

$(PATHB)%.o: $(PATHS_DICT)%.c
	$(CC) $(CFLAGS) -c $< -o $@