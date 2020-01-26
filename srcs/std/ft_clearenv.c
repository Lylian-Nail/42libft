/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:16:04 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 17:19:55 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

extern char **g_environ;

void	ft_clearenv(void)
{
	int		i;

	i = 0;
	if (!g_environ)
		return ;
	while (g_environ[i])
		ft_strdel((char**)&g_environ[i++]);
	free(g_environ);
	g_environ = NULL;
}
