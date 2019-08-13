/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:43:27 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 21:56:43 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	char	*strmap;

	len = (int)ft_strlen(s);
	strmap = (char*)malloc(sizeof(char) * (len + 1));
	if (!strmap)
		return (NULL);
	len--;
	while (len >= 0)
	{
		strmap[len] = f(s[len]);
		len--;
	}
	
	return (strmap);
}