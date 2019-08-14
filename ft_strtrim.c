/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 23:25:31 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/14 01:52:01 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	trimlen;
	size_t	sav_trimlen;
	char	*strtrim;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	trimlen = ft_strlen(s);
	while (trimlen && (s[trimlen - 1] == ' ' || s[trimlen - 1] == '\n' \
	|| s[trimlen - 1] == '\t'))
		trimlen--;
	strtrim = (char*)malloc(sizeof(char) * (trimlen + 1));
	if (!strtrim)
		return (NULL);
	strtrim[trimlen] = '\0';
	sav_trimlen = trimlen;
	while (trimlen--)
		*strtrim++ = *s++;
	return (strtrim - sav_trimlen);
}