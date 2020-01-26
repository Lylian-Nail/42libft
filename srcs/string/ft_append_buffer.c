/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:38:42 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/09 20:40:59 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_string.h"
#include <stdlib.h>

char	*ft_append_buffer(char **buffer, char *str)
{
	char	*tmp;

	if (!*buffer)
		*buffer = ft_strdup(str);
	else
	{
		tmp = ft_strjoin(*buffer, str);
		free(*buffer);
		*buffer = tmp;
	}
	return (*buffer);
}
