/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 10:09:18 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/26 00:32:32 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_H

# define BUFFER_H

# include <stddef.h>

# define BUFFER_SIZE	(1)

typedef struct	s_buf
{
	char		buf[BUFFER_SIZE];
	long		size;
}				t_buf;

void			buffer_append(t_buf *buffer, int item);
void			str_buffer_append(t_buf *buffer, char *str);
int				flush_buffer(t_buf *buffer);

#endif
