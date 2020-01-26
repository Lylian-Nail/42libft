/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:45:16 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/09 12:46:39 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lft_string.h"

void	*ft_memdup(const void *s, size_t n)
{
	void	*dup;

	dup = malloc(n);
	if (!dup)
		return (NULL);
	return (ft_memcpy(dup, s, n));
}
