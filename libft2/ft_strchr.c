/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:40:30 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/22 13:00:52 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == (char) c)
			return ((char *)&s[count]);
		count++;
	}
	if (s[count] == (char) c)
		return ((char *)&s[count]);
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char *sd = "Mondongo";

	printf("%s", ft_strchr(sd, 'o'));
	return (0);
}*/