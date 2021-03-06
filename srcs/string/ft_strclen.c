/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:40:29 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/16 15:22:26 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_string.h"

size_t	ft_strclen(char const *str, char const *charset)
{
	char const	*begin;

	begin = str;
	while (*str && !ft_strchr(charset, *str))
		str++;
	return (str - begin);
}
