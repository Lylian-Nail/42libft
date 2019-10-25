/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:03:35 by lperson-          #+#    #+#             */
/*   Updated: 2019/10/14 13:57:42 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *link;
	t_list *lst_map;

	lst_map = NULL;
	while (lst)
	{
		link = ft_lstnew(f(lst->content));
		if (!link)
			return (NULL);
		ft_lstadd_back(&lst_map, link);
		lst = lst->next;
	}
	return (lst_map);
}
