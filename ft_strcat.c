/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 01:05:14 by lperson-          #+#    #+#             */
/*   Updated: 2019/08/13 01:06:53 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	char	*begin;

	begin = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (begin);
}