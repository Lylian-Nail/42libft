/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:41:48 by lperson-          #+#    #+#             */
/*   Updated: 2019/12/16 15:25:41 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "lft_string.h"
#include "lft_io.h"

/*
**	desc: Move the memarea of the buffer for cleaning line or all buffer.
**	args: #1 the buffer to clear.
**	ret: None.
*/

static void		clear_buffer(char *buffer)
{
	int		i;
	int		d;

	i = 0;
	d = 0;
	while (buffer[i] && buffer[i++] != '\n')
		;
	while (buffer[i])
		buffer[d++] = buffer[i++];
	buffer[d] = '\0';
}

/*
**	desc: Just clear line from the buffer (or all buffer) and put it into line.
**	args: #1 Adress of the writing buffer, #2 Adress of the reading buffer.
**	ret: Return 1, 0 or -1 for line read, not line, malloc error.
*/

static int		append_line(char **line, char *buffer)
{
	char	*tmp;
	char	*has_line;

	has_line = ft_strchr(buffer, '\n');
	if (!*line)
		*line = ft_strcdup(buffer, "\n");
	else
	{
		tmp = ft_strcjoin(*line, buffer, "\n");
		free(*line);
		*line = tmp;
	}
	clear_buffer(buffer);
	if (!*line)
		return (-1);
	return (has_line ? 1 : 0);
}

int				get_next_line(int fd, char **line)
{
	static char	buffer[OPEN_MAX][BUFFER_SIZE + 1];
	int			bytes;
	int			ret;
	char		*tmp;

	bytes = BUFFER_SIZE;
	ret = 0;
	tmp = NULL;
	if (fd < 0 || fd > OPEN_MAX - 1)
		return (-1);
	if (*buffer[fd])
		ret = append_line(&tmp, buffer[fd]);
	while (ret == 0 && (bytes = read(fd, buffer[fd], BUFFER_SIZE)) > 0)
	{
		buffer[fd][bytes] = '\0';
		ret = append_line(&tmp, buffer[fd]);
	}
	if (!line || bytes == -1 || ret == -1)
		return (ft_strdel(&tmp));
	*line = tmp;
	return (tmp || bytes ? 1 : 0);
}
