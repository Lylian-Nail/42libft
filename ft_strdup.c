/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 00:20:16 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 00:36:25 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = 0;
	while (s[len++])
		;
	dup = (char*)malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	while (len--)
		dup[len] = s[len];
	return (dup);
}