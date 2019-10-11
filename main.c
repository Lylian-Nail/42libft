/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 08:11:15 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/11 10:46:22 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <limits.h>

char	alt_toupper(unsigned int none, char c)
{
	(void)none;
	return (toupper(c));
}

void	tst_atoi(const char *nptr)
{
	//Choosen values.
	printf("ATOI: %d\t", atoi(nptr));
	printf("FT_ATOI: %d\n", ft_atoi(nptr));
	//Max value.
	printf("ATOI: %d\t", atoi("2147483647"));
	printf("FT_ATOI: %d\n", ft_atoi("2147483647"));
	//Min value.
	printf("ATOI: %d\t", atoi("-2147483648"));
	printf("FT_ATOI: %d\n", ft_atoi("-2147483648"));

	printf("\n");
}

void	tst_itoa(int n)
{
	//Choosen values.
	printf("FT_ITOA: %s\n", ft_itoa(n));
	//Max value.
	printf("FT_ITOA: %s\n", ft_itoa(INT_MAX));
	//Min value.
	printf("FT_ITOA: %s\n", ft_itoa(INT_MIN));

	printf("\n");
}

void	tst_putnbr_fd(int n, int fd)
{
	//Choosen values.
	ft_putnbr_fd(n, fd);
}

void	tst_memccpy(const void *src, int c, size_t len)
{
	//Print addr.
	char	*cpy[len];
	printf("MEMCCPY %p\t", (char*)memccpy(cpy, src, c, len));
	printf("FT_MEMCCPY %p\n", (char*)ft_memccpy(cpy, src, c, len));

	printf("\n");
}

void	tst_split(char const *s, char c)
{
	//Choosen values.
	char **split = ft_split(s, c);
	printf("FT_SPLIT\n");
	while (*split)
		printf("%s\n", *split++);
	
	printf("\n");
}

void	tst_strchr(const char *s, int c)
{
	//Choosen values.
	printf("STRCHR %s\t", strchr(s, c));
	printf("FT_STRCHR %s\n", ft_strchr(s, c));

	printf("\n");
}

void	tst_strrchr(const char *s, int c)
{
	//Choosen values.
	printf("STRRCHR %s\t", strrchr(s, c));
	printf("FT_STRRCHR %s\n", ft_strrchr(s, c));

	printf("\n");
}

void	tst_strdup(char const *s)
{
	//Choosen values.
	printf("STRDUP %s\t", ft_strdup(s));
	printf("FT_STRDUP %s\n", ft_strdup(s));

	printf("\n");
}

void	tst_strjoin(char const *s1, char const *s2)
{
	//Choosen values.
	printf("FT_STRJOIN %s\n", ft_strjoin(s1, s2));

	printf("\n");
}

void	tst_strlcpy(char const *src, size_t dstsize)
{
	//Choosen values.
	//char dsttst[dstsize];
	char rslt[dstsize];

	// printf("STRLCPY: %ld\t", strlcpy(dsttst, src, dstsize));
	// printf("STRLCPY: %s\n", dsttst);
	printf("FT_STRLCPY: %ld\t", ft_strlcpy(rslt, src, dstsize));
	printf("FT_STRLCPY: %s\n", rslt);

	printf("\n");
}

void	tst_strlcat(char *dst, char const *src, size_t dstsize)
{
	//Choosen values.
	char dsttst[dstsize];
	char rslt[dstsize];

	strcpy(dsttst, dst);
	strcpy(rslt, dst);

	// printf("STRLCAT: %ld\t", strlcat(dsttst, src, dstsize));
	// printf("STRLCAT: %s\n", dsttst);
	printf("FT_STRLCAT: %ld\t", ft_strlcat(rslt, src, dstsize));
	printf("FT_STRLCAT: %s\n", rslt);

	printf("\n");
}

void	tst_strmapi(char const *s)
{
	//Choosen values.
	printf("FT_STRMAPI: %s\n", ft_strmapi(s, alt_toupper));

	printf("\n");
}

void	tst_strncmp(char const *s1, char const *s2, size_t n)
{
	//Choosen values.
	printf("")
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		tst_atoi(av[1]);
		tst_itoa(atoi(av[1]));
		tst_strdup(av[1]);
		tst_strmapi(av[1]);
	}
	else if (ac == 3)
	{
		//tst_putnbr_fd(atoi(av[1]), atoi(av[2]));
		tst_split(av[1], av[2][0]);
		tst_strchr(av[1], av[2][0]);
		tst_strrchr(av[1], av[2][0]);
		tst_strjoin(av[1], av[2]);
		tst_strlcpy(av[1], atoi(av[2]));
	}
	else if (ac == 4)
	{
		int		bytes = atoi(av[3]);
		char	c = av[2][0];
		tst_memccpy(av[1], c, bytes);
		tst_strlcat(av[1], av[2], atoi(av[3]));
	}
	
	return (0);
}