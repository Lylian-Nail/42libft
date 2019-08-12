/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:20:49 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 00:08:52 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*memarea1 = s1;
	const unsigned char	*memarea2 = s2;

	while (*memarea1 == *memarea2 && --n)
	{
		memarea1++;
		memarea2++;
	}
	return ((n) ? *memarea1 - *memarea2 : 0);
}