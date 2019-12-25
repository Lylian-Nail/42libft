SRCS += $(addprefix $(PATHS_BTREE), \
btree_create_node.c \
btree_apply_inorder.c \
btree_apply_postorder.c \
btree_apply_preorder.c \
btree_clear.c \
btree_insert_data.c \
btree_search_item.c)

$(PATHB)%.o: $(PATHS_BTREE)%.c
	$(CC) $(CFLAGS) -c $< -o $@
