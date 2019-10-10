/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 23:25:31 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/09 15:20:51 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_strclen(char const *s, char const *set)
{
	char *begin;

	if (!s)
		return (0);
	begin = (char*)s;
	while (*s && ft_strchr(set, *s) == NULL)
		s++;
	return (s - begin);
}

char			*ft_strtrim(char const *s, char const *set)
{
	size_t	trimlen;
	char	*strtrim;

	if (!s)
		return (NULL);
	while (ft_strchr(set, *s))
		s++;
	trimlen = ft_strclen(s, set);
	strtrim = (char*)malloc(sizeof(char) * (trimlen + 1));
	if (!strtrim)
		return (NULL);
	strtrim[trimlen] = '\0';
	while (trimlen--)
		strtrim[trimlen] = *s++;
	return (strtrim);
}
