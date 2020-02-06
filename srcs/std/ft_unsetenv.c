/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:26:18 by lperson-          #+#    #+#             */
/*   Updated: 2020/02/06 14:24:46 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>
#include "lft_string.h"

extern char	**g_environ;

static size_t	new_len(const char *name)
{
	size_t	name_len;
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	name_len = ft_strlen(name);
	while (g_environ[i])
		if (ft_strncmp(g_environ[i++], name, name_len))
			len++;
	return (len);
}

static int		check_einval(const char *name)
{
	if (!name || !*name || ft_strchr(name, '='))
	{
		errno = EINVAL;
		return (-1);
	}
	return (1);
}

int				ft_unsetenv(const char *name)
{
	char	**environ;
	size_t	len;
	size_t	name_len;
	size_t	i;

	len = new_len(name);
	i = 0;
	name_len = ft_strlen(name);
	if (check_einval(name) == -1)
		return (-1);
	if (!(environ = (char**)malloc(sizeof(char*) * (len + 1))))
		return (-1);
	len = 0;
	while (g_environ[i])
	{
		if (ft_strncmp(g_environ[i], name, name_len))
			environ[len++] = g_environ[i];
		else
			free(g_environ[i]);
		i++;
	}
	environ[len] = NULL;
	free(g_environ);
	g_environ = environ;
	return (1);
}
