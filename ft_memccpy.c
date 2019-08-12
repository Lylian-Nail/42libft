/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:01:11 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/12 23:10:27 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*memsrc = src;
	unsigned char		*memdest;

	memdest = dest;
	while (n--)
		if ((*memdest++ = *memsrc++) == c)
			return (memdest);
	return (NULL);
	
}