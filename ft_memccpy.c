/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:01:11 by lperson-          #+#    #+#             */
/*   Updated: 2019/09/18 12:56:55 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*memsrc = src;
	unsigned char		*memdest;
	unsigned char		c_mem;

	memdest = dest;
	c_mem = c;
	while (n--)
	{
		*memdest = *memsrc++;
		if (*memdest++ == c_mem)
			return (memdest);
	}
	return (NULL);
}