/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 22:51:36 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/26 00:59:42 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_btree.h"

void	btree_insert_data(t_btree **root, void *item, \
int (*cmpf)(void *, void *))
{
	t_btree		*cpy;
	t_btree		*new;

	new = btree_create_node(item);
	if (!new)
		btree_clear(root, free);
	if (!*root)
		*root = new;
	cpy = *root;
	while (cpy != new)
	{
		if (cmpf(item, cpy->item) < 0)
		{
			if (!cpy->left)
				cpy->left = new;
			else
				cpy = cpy->left;
		}
		else
		{
			if (!cpy->right)
				cpy->right = new;
			else
				cpy = cpy->right;
		}
	}
}
