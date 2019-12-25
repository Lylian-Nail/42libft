/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 00:06:01 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/26 00:15:25 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "lft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, \
int (*cmpf)(void *, void *))
{
	if (!root)
		return (NULL);
	while (cmpf(data_ref, root->item) != 0)
	{
		if (cmpf(data_ref, root->item) < 0)
			root = root->left;
		else
			root = root->right;
		if (!root)
			return (NULL);
	}
	return (root->item);
}
