/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:20:01 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 19:00:32 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *to_find;
	char		*match;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			match = (char*)haystack;
			to_find = needle;
			while (*haystack == *to_find)
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