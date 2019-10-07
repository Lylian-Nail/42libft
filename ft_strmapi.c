/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:47:56 by lperson-          #+#    #+#             */
/*   Updated: 2019/09/28 23:21:54 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char		*strmapi;

	len = (int)ft_strlen(s);
	strmapi = (char*)malloc(sizeof(char) * (len + 1));
	if (!strmapi)
		return (NULL);
	strmapi[len--] = '\0';
	while (len >= 0)
	{
		strmapi[len] = f(len, s[len]);
		len--;
	}
	return (strmapi);
}