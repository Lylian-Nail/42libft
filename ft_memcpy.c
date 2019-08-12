/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:58:54 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/12 23:10:44 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*memsrc = src;
	unsigned char		*memdest;

	memdest = dest;
	while (n--)
		*memdest++ = *memsrc++;
	return (dest);
}