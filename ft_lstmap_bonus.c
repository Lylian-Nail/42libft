/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:03:35 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/11 08:18:36 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *link;
	t_list *lst_map;

	lst_map = NULL;
	while (lst)
	{
		link = f(lst->content);
		ft_lstadd_back(&lst_map, link);
		if (!link)
		{
			ft_lstclear(&lst_map, free);
			return (NULL);
		}
		lst = lst->next;
	}
	return (lst_map);
}
