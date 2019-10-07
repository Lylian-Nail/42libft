/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:20:01 by lperson-          #+#    #+#             */
/*   Updated: 2019/09/24 23:59:24 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *match;
	char *to_find;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			match = (char*)haystack;
			to_find = (char*)needle;
			while (*match == *to_find)
			{
				match++;
				to_find++;
				if (!*to_find)
					return ((char*)haystack);
			}
			haystack++;
		}
		else
			haystack++;
	}
	return (NULL);
}