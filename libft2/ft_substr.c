/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:59:19 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/24 11:59:10 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new = malloc(sizeof (char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len && s[start + i] != '\0' && start < ft_strlen(s))
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int main()
{
	char *cadena;
	cadena = "Mondongo y Knekro";
	printf("%s", ft_substr(cadena, 11, 6));
	return (0);
}*/