/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crealloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:12:10 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/11 20:17:59 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

void	ft_crealloc(void **s, size_t old_size, size_t new_size)
{
	void	*tmp;

	tmp = ft_calloc(1, new_size);
	if (tmp)
	{
		if (old_size < new_size)
			ft_memcpy(tmp, *s, old_size);
		else
			ft_memcpy(tmp, *s, new_size);
	}
	ft_memdel(s);
	*s = tmp;
}
