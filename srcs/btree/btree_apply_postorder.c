/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_postorder.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 14:13:57 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/25 14:15:17 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_btree.h"

void	btree_apply_postorder(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_postorder(root->left, applyf);
	btree_apply_postorder(root->right, applyf);
	applyf(root->item);
}
