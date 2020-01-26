/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v_array_clear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:40:08 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/21 19:29:39 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_v_array.h"

void	ft_v_array_clear(t_v_array *array, void (*delf)(void *))
{
	unsigned	i;

	i = 0;
	while (i < array->len)
		delf(array->data[i++]);
	free(array->data);
	array->data = NULL;
	array->len = 0;
	array->size = 0;
}
