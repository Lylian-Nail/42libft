/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v_array_set.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:32:48 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/11 21:16:53 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_v_array.h"

int		ft_v_array_set(t_v_array *array, int i, void *data)
{
	if ((unsigned)i >= array->len)
		return (ft_v_array_add(array, data));
	else
		array->data[i] = data;
	return (1);
}
