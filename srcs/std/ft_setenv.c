/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 15:16:33 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 17:14:43 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include "lft_string.h"

extern char	**g_environ;

static size_t	len_envs(void)
{
	size_t	i;

	i = 0;
	while (g_environ[i])
		i++;
	return (i);
}

static int		free_2dtab(char **tab, size_t size)
{
	while (size--)
		ft_strdel((char**)&tab[size]);
	free(tab);
	return (-1);
}

static int		addenv(const char *name, const char *value)
{
	char		**new_envs;
	size_t		len;
	int			i;

	i = 0;
	len = len_envs() + 1;
	if (!(new_envs = (char**)malloc(sizeof(char*) * (len + 1))))
		return (-1);
	while (g_environ[i] != NULL)
	{
		if (!(new_envs[i] = ft_strdup(g_environ[i])))
			return (free_2dtab(new_envs, i));
		i++;
	}
	if (!(new_envs[i] = ft_strjoin_sep(name, value, '=')))
		return (free_2dtab(new_envs, i));
	free_2dtab(g_environ, len);
	new_envs[++i] = NULL;
	g_environ = new_envs;
	return (1);
}

static int		get_index_env(const char *name)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(name);
	while (g_environ[i])
	{
		if (ft_strncmp(g_environ[i], name, len) == 0)
			return (i);
		i++;
	}
	return (-1);
}

int				ft_setenv(const char *name, const char *value, int overwrite)
{
	int			i;
	char		*new;

	if (!name || !*name || ft_strchr(name, '='))
	{
		errno = EINVAL;
		return (-1);
	}
	i = get_index_env(name);
	if (i != -1)
	{
		if (overwrite)
		{
			ft_strdel((char**)&g_environ[i]);
			if (!(new = ft_strjoin_sep(name, value, '=')))
				return (-1);
		}
		return (1);
	}
	return (addenv(name, value));
}
