/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 00:27:54 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 01:03:23 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*begin;
	int		size;

	begin = dest;
	size = n;
	while (size-- && (*dest++ = *src++))
		;
	while (size > 0)
	{
		*dest++ = '\0';
		size--;
	}
	return (begin);
}