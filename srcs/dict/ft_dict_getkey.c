/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_getkey.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:29:17 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 12:36:34 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_dict.h"

void	*ft_dict_getkey(t_dict *dict, void *key, int cmpf(void *s1, void *s2))
{
	void	*actual_key;
	int		i;

	i = 0;
	while ((actual_key = ft_v_array_get(&dict->keys, i)) != NULL)
	{
		if (cmpf(actual_key, key) == 0)
			return (ft_v_array_get(&dict->values, i));
		i++;
	}
	return (NULL);
}
