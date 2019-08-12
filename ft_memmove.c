/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:08:58 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/12 23:52:06 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*memsrc = src;
	unsigned char			*memdest;
	unsigned char			memtmp[n];
	unsigned int			i;

	i = n;
	memdest = dest;
	while (n--)
		memtmp[n] = memsrc[n];
	while (i--)
		memdest[i] = memtmp[i];
	return (dest);
}