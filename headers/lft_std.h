/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_std.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:21:47 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 17:36:46 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_STD_H

# define LFT_STD_H

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_initenv(const char *envp[]);
void	ft_clearenv(void);
char	*ft_getenv(const char *name);
int		ft_setenv(const char *name, const char *value, int overwrite);
int		ft_unsetenv(const char *name);

#endif
