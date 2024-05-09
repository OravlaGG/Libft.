/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:42:38 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/24 12:10:23 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*new;
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	start = 0;
	end = 0;
	if (*s1)
	{
		while (ft_strchr(set, s1[start]))
			start++;
		end = ft_strlen(s1);
		while (ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		new = ft_substr(s1, start, end - start);
		if (!new)
			return (NULL);
		return (new);
	}
	else
	{
		new = ft_substr(s1, 0, 0);
		return (new);
	}
}
/*		if (!new) use in case
			return (NULL);*/