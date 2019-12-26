/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 23:50:58 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/26 02:27:20 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_btree.h"

void	btree_clear(t_btree **root, void (*freef)(void *))
{
	if (!*root)
		return ;
	btree_clear(&(*root)->left, freef);
	freef((*root)->item);
	btree_clear(&(*root)->right, freef);
	free(*root);
	*root = NULL;
}
