/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:41:57 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/16 15:23:01 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

char	*ft_strcjoin(char const *s1, char const *s2, char const *charset)
{
	size_t	jlen;
	char	*join;

	jlen = ft_strclen(s1, charset) + ft_strclen(s2, charset);
	join = (char*)malloc(sizeof(char) * (jlen + 1));
	if (!join)
		return (NULL);
	while (*s1 && !ft_strchr(charset, *s1))
		*join++ = *s1++;
	while (*s2 && !ft_strchr(charset, *s2))
		*join++ = *s2++;
	*join = '\0';
	return (join - jlen);
}
