/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:54:46 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/16 11:32:23 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	cdest;

	count = 0;
	if (ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	cdest = ft_strlen(dst);
	while (src[count] != '\0' && cdest + 1 < dstsize)
	{
		dst[cdest] = src[count];
		cdest++;
		count++;
	}
	dst[cdest] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[count]));
}
