/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 16:35:02 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 12:36:13 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_dict.h"

t_dict	ft_dict_new(size_t size)
{
	t_dict	new;

	new.keys = ft_v_array_new(size);
	new.values = ft_v_array_new(size);
	return (new);
}
