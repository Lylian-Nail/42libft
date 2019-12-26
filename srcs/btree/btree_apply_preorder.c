/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_preorder.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 14:11:02 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/26 02:26:38 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_btree.h"

void	btree_apply_preorder(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return;
	applyf(root);
	btree_apply_preorder(root->left, applyf);
	btree_apply_preorder(root->right, applyf);
}
