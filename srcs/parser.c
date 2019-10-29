/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:58:43 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/29 17:47:44 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "lft_std.h"
#include "lft_string.h"
#include "parse.h"
#include "buffer.h"
#include "formats.h"

/*
**	desc: Return the index of an item into an str.
**	args: #1 The str where we search the item, #2 The index to find.
**	ret: The index of the item in str.
*/

static size_t			get_index(char const *str, int item)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == item)
			return (index);
		index++;
	}
	return (index);
}

/*
**	desc: Set the t_parse structure that contains all the infos for format the
**	output.
**	args: #1 The format string that we parse for gains the infos.
**	ret: Return the structure.
*/

static t_parse			init_flags(char const *format)
{
	const unsigned	tab[8] = {CHAR, STR, PTR, INT, INT, UINT, HEX_MA, HEX_MIN};
	const char		*convert = "cspiduxX";
	t_parse			infos;

	infos.flag = 0;
	infos.padding = ft_atoi(format);
	while (*format == '+' || *format == '-')
		format++;
	if (*format == '0')
		infos.flag |= FILL_0;
	while (!ft_strchr(convert, *format))
		format++;
	if (*format != '\0')
		infos.flag |= tab[get_index(convert, *format)];
	return (infos);
}

/*
**	desc: parse, format and output the result of a flag spec for printf.
**	args: #1 The buffer wich printf use, #2 the flag spec to parse.
**	#3 The list of the arguments that we use.
**	ret: The number of bytes writed.
*/

int					ft_format(char *buffer, char const *format, va_list args)
{
	t_parse	infos;
	int		bytes;

	infos = init_flags(format);
	bytes = 0;
	if (infos.padding > 0)
	{
		if (infos.flag & FILL_0)
			ft_fill(buffer, '0', infos.padding);
		else
			ft_fill(buffer, ' ', infos.padding);
	}
	if (infos.flag & CHAR)
		bytes += buffer_append(buffer, (int)va_arg(args, int));
	return (bytes);
}