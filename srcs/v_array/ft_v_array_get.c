/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v_array_get.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:36:57 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/11 21:16:30 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_string.h"
#include "lft_v_array.h"

void	*ft_v_array_get(t_v_array *array, int i)
{
	if ((unsigned)i < array->len)
		return (array->data[i]);
	return (NULL);
}
