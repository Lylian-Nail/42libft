/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 13:23:30 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/25 13:25:22 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*new;

	new = (t_btree*)malloc(sizeof(t_btree));
	if (!new)
		return (NULL);
	new->item = item;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
