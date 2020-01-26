/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 23:34:44 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/08 23:42:36 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*dup;

	len = ft_strnlen(s, n);
	dup = (char*)malloc(sizeof(char) * (len + 1));
	n = len;
	if (!dup)
		return (NULL);
	while (n--)
		*dup++ = *s++;
	*dup = '\0';
	return (dup - len);
}
