/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 23:01:05 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/09 14:25:34 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*begin;

	if (!s)
		return (NULL);
	substr = (char*)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	begin = substr;
	while (s[start] && len--)
	{
		*substr++ = s[start];
		start++;
	}
	*substr = '\0';
	return (begin);
}
