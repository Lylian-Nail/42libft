/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:42:26 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/16 15:23:50 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

char	*ft_strcdup(char const *str, char const *charset)
{
	size_t	len;
	char	*dup;

	len = ft_strclen(str, charset);
	dup = (char*)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (*str && !ft_strchr(charset, *str))
		*dup++ = *str++;
	*dup = '\0';
	return (dup - len);
}
