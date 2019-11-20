/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_io.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lylian.person-gay@protonmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:23:28 by lperson-          #+#    #+#             */
/*   Updated: 2019/11/20 18:04:28 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_IO_H

# define LFT_IO_H

# define BUFFER_SIZE	(64)
# define OPEN_MAX		(4096)

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		get_next_line(int fd, char **line);
int		ft_printf(char const *format, ...);

#endif
