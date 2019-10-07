/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:15:32 by lperson-          #+#    #+#             */
/*   Updated: 2019/09/25 00:01:04 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char 	*match;
	char 	*to_find;
	size_t	bytes;

	if (!*needle)
		return ((char*)haystack);
	while (len && *haystack)
	{
		bytes = len--;
		if (*haystack == *needle)
		{
			to_find = (char*)needle;
			match = (char*)haystack;
			while (bytes-- && *match == *to_find)
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