/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:15:13 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/22 15:30:58 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (((unsigned char) s2[i] || (unsigned char) s1[i])
		&& (unsigned char) s1[i] == (unsigned char) s2[i] && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
