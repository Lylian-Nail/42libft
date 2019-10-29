/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:18:52 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/29 17:47:53 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H

# define PARSE_H

# include <stdarg.h>

typedef struct	s_parse
{
	unsigned int		flag;
	int					padding;
}				t_parse;

typedef enum	e_flags
{
	CHAR = (1u << 1),
	STR = (1u << 2),
	PTR = (1u << 3),
	INT = (1u << 4),
	UINT = (1u << 5),
	HEX_MA = (1u << 6),
	HEX_MIN = (1u << 7),
	FILL_0 = (1u << 8),
	FILL_SP  = (1u << 9)
}				t_flags;

int				ft_format(char *buffer, char const *format, va_list args);


#endif
