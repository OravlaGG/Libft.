/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:28:57 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/26 12:21:21 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*t;

	if (!del || !lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		t = current;
		current = current->next;
		del(t->content);
		free(t);
	}
	*lst = NULL;
}
