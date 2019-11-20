/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lylian.person-gay@protonmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:40:29 by lperson-          #+#    #+#             */
/*   Updated: 2019/11/20 17:40:43 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strclen(char const *str, int c)
{
	char const	*begin;

	begin = str;
	while (*str && *str != c)
		str++;
	return (str - begin);
}
