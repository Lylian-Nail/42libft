/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lylian.person-gay@protonmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:41:57 by lperson-          #+#    #+#             */
/*   Updated: 2019/11/20 17:52:29 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

char	*ft_strcjoin(char const *s1, char const *s2, int c)
{
	size_t	jlen;
	char	*join;

	jlen = ft_strclen(s1, c) + ft_strclen(s2, c);
	join = (char*)malloc(sizeof(char) * (jlen + 1));
	if (!join)
		return (NULL);
	while (*s1 && *s1 != c)
		*join++ = *s1++;
	while (*s2 && *s2 != c)
		*join++ = *s2++;
	*join = '\0';
	return (join - jlen);
}
