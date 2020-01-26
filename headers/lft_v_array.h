/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_v_array.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 04:05:22 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/11 21:17:21 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_V_ARRAY_H

# define LFT_V_ARRAY_H

# include <stddef.h>

typedef struct	s_v_array {
	void	**data;
	size_t	len;
	size_t	size;
}				t_v_array;

t_v_array	ft_v_array_new(size_t size);
int			ft_v_array_add(t_v_array *array, void *data);
int			ft_v_array_set(t_v_array *array, int i, void *data);
void		*ft_v_array_get(t_v_array *array, int i);
void		ft_v_array_clear(t_v_array *array, void (*delf)(void *));

#endif
