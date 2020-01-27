/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_dict.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 16:29:57 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/27 17:12:19 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_DICT_H

# define LFT_DICT_H

# include "lft_v_array.h"

typedef struct	s_dict {
	t_v_array	keys;
	t_v_array	values;
}				t_dict;

t_dict			ft_dict_new(size_t size);
int				ft_dict_setkey(t_dict *dict, void *key, void *value, \
int cmpf(void *s1, void *s2));
void			*ft_dict_getkey(t_dict *dict, void *key, \
int cmpf(void *s1, void *s2));
void			*ft_dict_delkey(t_dict *dict, void *key, \
int cmpf(void *s1, void *s2));
void			ft_dict_clear(t_dict *dict, void (*delkeysf)(void *), \
void (*delvaluesf)(void *));

#endif
