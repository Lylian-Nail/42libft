/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:15:32 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 19:10:13 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *to_find;
	char		*match;
	size_t		sav_len;

	if (!*needle)
		return ((char*)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle)
		{
			sav_len = len;
			to_find = needle;
			match = (char*)haystack;
			while (sav_len-- && *haystack == *to_find)
			{
				haystack++;
				to_find++;
			}
			if (!*(to_find))
				return (match);
		}
		if (*haystack)
			haystack++;
	}
	return (NULL);
}