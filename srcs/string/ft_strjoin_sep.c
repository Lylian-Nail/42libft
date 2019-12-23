/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_sep.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:18:16 by lperson-          #+#    #+#             */
/*   Updated: 2019/11/24 14:23:01 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

char	*ft_strjoin_sep(char const *s1, char const *s2, char sep)
{
	size_t	len;
	char	*join;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char*)malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	while (*s1)
		*join++ = *s1++;
	*join++ = sep;
	while (*s2)
		*join++ = *s2++;
	*join = '\0';
	return (join - len);
}
