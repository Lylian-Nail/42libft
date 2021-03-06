/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:15:32 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/08 17:00:14 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lft_string.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		write(fd, s, sizeof(char) * ft_strlen(s));
		write(fd, "\n", sizeof(char));
	}
}
