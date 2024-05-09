/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:06:04 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/11 14:46:03 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pb;
	unsigned int	i;

	pb = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pb[i] = 0;
		i++;
	}
}
