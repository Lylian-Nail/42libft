/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 14:58:43 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 17:15:11 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "lft_string.h"

extern char	**g_environ;

char	*ft_getenv(const char *name)
{
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(name);
	if (!name || !*name || ft_strchr(name, '='))
	{
		errno = EINVAL;
		return (NULL);
	}
	while (g_environ[i])
	{
		if (ft_strncmp(g_environ[i], name, len) == 0)
			return (g_environ[i] + len + 1);
		i++;
	}
	return (NULL);
}
