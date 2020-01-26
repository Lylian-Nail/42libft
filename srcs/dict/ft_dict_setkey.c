/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_setkey.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 11:49:45 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 12:37:15 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_dict.h"

int		ft_dict_setkey(t_dict *dict, void *key, void *value, \
int cmpf(void *s1, void *s2))
{
	void	*actual_key;
	int		i;
	int		ret;

	i = 0;
	while ((actual_key = ft_v_array_get(&dict->keys, i)) != NULL)
	{
		if (cmpf(actual_key, key) == 0)
			return (ft_v_array_set(&dict->values, i, value));
		i++;
	}
	ret = ft_v_array_add(&dict->keys, key);
	if (ret == -1)
		return (-1);
	return (ft_v_array_add(&dict->values, value));
}
