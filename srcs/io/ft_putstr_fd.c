/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:14:02 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/08 17:00:09 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lft_string.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, sizeof(char) * ft_strlen(s));
}
