/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:15:00 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/16 11:41:40 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	new = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		new[i + c] = s2[c];
		c++;
	}
	new[i + c] = '\0';
	return (new);
}
/*
#include <stdio.h>

int main()
{
	char *s1 = "Misty";
	char *s2 ="Mondongo";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/