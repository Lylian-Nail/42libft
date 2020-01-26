/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v_array_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:23:00 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/11 22:42:43 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_string.h"
#include "lft_v_array.h"

int		ft_v_array_add(t_v_array *array, void *data)
{
	if (array->size <= array->len)
	{
		ft_crealloc((void**)&array->data, array->size * sizeof(void*), \
		array->size * sizeof(void*) * 2);
		array->size *= 2;
	}
	if (!array->data)
		return (-1);
	array->data[array->len++] = data;
	return (1);
}
