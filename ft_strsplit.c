/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:39:26 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/14 11:48:09 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	countwords(char const *s, char c)
{
	int		in_word;
	size_t	count;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s++ != c)
		{
			if (in_word != 1)
				count++;
			in_word = 1;
		}
		else
			in_word = 0;
	}
	return (count);
}

static size_t	lenword(char const *s, char c)
{
	size_t	lenword;

	lenword = 0;
	while (s[lenword] && s[lenword] != c)
		lenword++;
	return (lenword);
}

static void		free_strtab(char **strsplit, size_t len)
{
	while (len--)
		free(strsplit[len]);
	free(strsplit);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		d;

	if (!(split = (char**)malloc(sizeof(char*) * (countwords(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			if (!(split[i] = (char*)malloc(sizeof(char) * (lenword(s, c) + 1))))
			{
				free_strtab(split, i);
				return (NULL);
			}
			d = 0;
			while (*s && *s != c)
				split[i][d++] = *s++;
			split[i++][d] = '\0';
		}
	}
	split[i] = NULL;
	return (split);
}