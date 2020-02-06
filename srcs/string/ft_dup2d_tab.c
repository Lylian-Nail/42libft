/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup2d_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:32:13 by lperson-          #+#    #+#             */
/*   Updated: 2020/02/06 14:40:50 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_string.h"

char	**ft_dup2d_tab(char *tab[])
{
	char	**dup;
	size_t	len;

	len = ft_len2d_tab(tab);
	dup = ft_calloc(len + 1, sizeof(char**));
	if (!dup)
		return (NULL);
	while (*tab)
	{
		if (!*(*dup = ft_strdup(*tab++)))
		{
			ft_free2d_tab(dup, ft_len2d_tab(dup));
			return (NULL);
		}
		dup++;
	}
	*dup = NULL;
	return (dup - len);
}
