/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_inorder.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 14:04:31 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/25 14:08:31 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_btree.h"

void	btree_apply_indorder(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return;

	btree_apply_indorder(root->left, applyf);
	applyf(root->item);
	btree_apply_indorder(root->right, applyf);
}
