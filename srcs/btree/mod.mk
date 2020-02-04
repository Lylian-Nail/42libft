SRCS += $(addprefix $(PATHS_BTREE), \
btree_create_node.c \
btree_insert_data.c \
btree_apply_prefix.c \
btree_apply_suffix.c \
btree_apply_infix.c)

$(PATHB)%.o: $(PATHS_BTREE)%.c
	$(CC) $(CFLAGS) -c $< -o $@
