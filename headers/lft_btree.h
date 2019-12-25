/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_btree.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 13:18:25 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/26 00:16:00 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_BTREE_H

# define LFT_BTREE_H

typedef struct	s_btree {
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

t_btree		*btree_create_node(void *item);
void		btree_apply_inorder(t_btree *root, void (*applyf)(void *));
void		btree_apply_postorder(t_btree *root, void (*applyf)(void *));
void		btree_apply_preorder(t_btree *root, void (*applyf)(void *));
void		btree_clear(t_btree **root, void (*freef)(void *));
void		btree_insert_data(t_btree **root, void *item, \
int (*cmpf)(void *, void *));
void		*btree_search_item(t_btree *root, void *data_ref, \
int (*cmpf)(void *, void *));

#endif
