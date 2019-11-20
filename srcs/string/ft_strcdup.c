/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lylian.person-gay@protonmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:42:26 by lperson-          #+#    #+#             */
/*   Updated: 2019/11/20 17:52:10 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

char	*ft_strcdup(char const *str, int c)
{
	size_t	len;
	char	*dup;

	len = ft_strclen(str, c);
	dup = (char*)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (*str && *str != c)
		*dup++ = *str++;
	*dup = '\0';
	return (dup - len);
}
