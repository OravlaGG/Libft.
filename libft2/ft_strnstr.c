/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:04:15 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/22 12:47:29 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[c] != '\0' && c < len)
	{
		i = 0;
		while (haystack[c + i] == needle[i] && c + i < len)
		{
			if (needle[i + 1] == '\0')
			{
				return ((char *)&haystack[c]);
			}
			i++;
		}
		c++;
	}
	return (0);
}
