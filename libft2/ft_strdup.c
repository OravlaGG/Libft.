/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:24:00 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/22 12:12:33 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	c;
	unsigned int	size;
	char			*dest;

	c = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	dest = malloc(sizeof (char) * (size + 1));
	if (!dest)
		return (NULL);
	while (s1[c] != '\0')
	{
		dest[c] = s1[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
