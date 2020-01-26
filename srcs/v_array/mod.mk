SRCS += $(addprefix $(PATHS_VEC), \
ft_v_array_new.c \
ft_v_array_add.c \
ft_v_array_set.c \
ft_v_array_get.c \
ft_v_array_clear.c)

$(PATHB)%.o: $(PATHS_VEC)%.c
	$(CC) $(CFLAGS) -c $< -o $@
