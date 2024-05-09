/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:09:10 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/24 11:49:49 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*stri;

	stri = (char *)s;
	i = 0;
	while (i < n)
	{
		if (stri[i] == (char)c)
			return (&stri[i]);
		i++;
	}
	return (NULL);
}
