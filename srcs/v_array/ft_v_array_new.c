/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v_array_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:20:08 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/11 21:01:16 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_string.h"
#include "lft_v_array.h"

t_v_array	ft_v_array_new(size_t size)
{
	t_v_array	new;

	new.data = ft_calloc(size ? size : 1, sizeof(size));
	new.len = 0;
	new.size = 1;
	return (new);
}
