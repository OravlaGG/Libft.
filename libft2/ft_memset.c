/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:54:22 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/15 12:12:52 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*This function change n characters to the s input of the s pointer.*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pb;
	size_t			i;

	i = 0;
	pb = (unsigned char *)s;
	while (i < n)
	{
		pb[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
