/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:16:18 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/12 23:37:39 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *memarea = s;
	unsigned char		to_find;

	to_find = c;
	while (n--)
	{
		if (*memarea == to_find)
			return ((void *)memarea);
		memarea++;
	}
	return (NULL);
}