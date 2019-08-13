/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 01:07:19 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 01:16:27 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*begin;

	begin = dest;
	while (*dest)
		dest++;
	while (n-- && (*dest++ = *src++))
		;
	*dest ='\0';
	return (begin);
}