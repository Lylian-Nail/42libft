/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:12:31 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/09 17:31:51 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst && *alst && new)
	{
		tmp = *alst;
		*alst = new;
		(*alst)->next = tmp;
	}
}
