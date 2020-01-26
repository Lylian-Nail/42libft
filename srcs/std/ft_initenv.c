/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initenv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:53:33 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 17:23:01 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

char	**g_environ = NULL;

static size_t	len_env(const char *env[])
{
	size_t	i;

	i = 0;
	while (env[i])
		i++;
	return (i);
}

static int		free2Dtab(char **tab, size_t len)
{
	while (len--)
		ft_strdel((char**)&tab[len]);
	free(tab);
	return (-1);
}

int				ft_initenv(const char *envp[])
{
	char		**environ;
	size_t		len;
	int			i;

	len = len_env(envp);
	i = 0;
	if (!(environ = (char**)malloc(sizeof(char*) * (len + 1))))
		return (-1);
	while (envp[i])
	{
		if (!(environ[i] = ft_strdup(envp[i])))
			return (free2Dtab(environ, i));
		i++;
	}
	g_environ = environ;
	return (1);
}
