/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:59:34 by lperson-          #+#    #+#             */
/*   Updated: 2020/01/26 14:01:03 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lft_dict.h"

void	ft_dict_clear(t_dict *dict, void (delkeysf(void *)), \
void (delvaluesf(void*)))
{
	ft_v_array_clear(&dict->keys, delkeysf);
	ft_v_array_clear(&dict->values, delvaluesf);
}
