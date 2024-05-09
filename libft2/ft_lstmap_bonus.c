/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:38:37 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/26 13:30:21 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newl;
	t_list	*newn;

	if (!lst)
		return (NULL);
	newl = NULL;
	while (lst)
	{
		if (f)
			newn = ft_lstnew(f(lst->content));
		else
			newn = ft_lstnew(lst->content);
		if (!newn)
		{
			ft_lstclear(&newl, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, newn);
		lst = lst->next;
	}
	return (newl);
}
