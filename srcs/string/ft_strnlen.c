/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 23:32:25 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/08 23:33:49 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strnlen(char const *s, size_t n)
{
	char const	*begin;

	begin = s;
	while (n-- && *s)
		s++;
	return (s - begin);
}
