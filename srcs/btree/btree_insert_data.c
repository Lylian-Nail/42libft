/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:00:24 by lperson-          #+#    #+#             */
/*   Updated: 2020/02/04 13:39:56 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_btree.h"

void	btree_insert_data(t_btree **root, void *item, \
int (*cmpf)(void *, void *))
{
	t_btree		*insert;

	if (!*root)
		*root = btree_create_node(item);
	insert = *root;
	while (insert)
	{
		if (cmpf(insert->item, item) <= 0)
		{
			if (!insert->left)
				insert->left = btree_create_node(item);
			insert = (insert->left && insert->left->item != item) \
			? insert->left : 0;
		}
		else
		{
			if (!insert->right)
				insert->right = btree_create_node(item);
			insert = (insert->right && insert->left->item != item) \
			? insert->right : 0;
		}
	}
}
