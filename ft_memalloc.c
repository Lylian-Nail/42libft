/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:23:20 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 21:25:19 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)malloc(size);
	if (!ptr)
		return (NULL);
	while (size--)
		ptr[size] = 0;
	return ((void*)ptr);
}