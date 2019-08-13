/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 01:18:00 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 11:02:55 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		srclen;
	size_t		destlen;
	size_t		sav_size;
	const char	*d;

	srclen = ft_strlen(src);
	sav_size = size;
	d = dest;
	while (size-- != 0 && *dest)
		dest++;
	destlen = dest - d;
	size = sav_size - destlen;
	if (size == 0)
		return (destlen + srclen);
	while (*src)
	{
		if (size != 1)
		{
			*dest++ = *src;
			size--;
		}
		src++;
	}
	*dest = '\0';
	return (destlen + srclen);
}