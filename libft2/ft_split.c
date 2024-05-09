/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:09:11 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/24 10:49:36 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_token_numb(char const *s, char del)
{
	size_t	token;
	int		i;

	token = 0;
	while (*s)
	{
		i = 0;
		while (*s == del && *s)
		{
			s++;
		}
		while (*s != del && *s)
		{
			if (i == 0)
			{
				token++;
			}
			i = 1;
			s++;
		}
	}
	return (token);
}

static int	ft_split_free(char **token_v, int pos, size_t buffer)
{
	int	i;

	i = 0;
	token_v[pos] = malloc(buffer);
	if (token_v[pos] == NULL)
	{
		while (i < pos)
			free(token_v[i++]);
		free(token_v);
		return (1);
	}
	return (0);
}

static int	ft_split_cpy(char **token_v, char const *s, char del)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == del && *s)
			s++;
		while (*s != del && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (ft_split_free(token_v, i, len + 1))
				return (1);
		}
		if (len)
			ft_strlcpy(token_v[i], s - len, len + 1);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	token;
	char	**token_v;

	if (s == NULL)
		return (NULL);
	token = 0;
	token = ft_token_numb(s, c);
	token_v = malloc((token + 1) * sizeof(char *));
	if (token_v == NULL)
		return (NULL);
	token_v[token] = NULL;
	if (token == 0)
		return (token_v);
	if (ft_split_cpy(token_v, s, c))
		return (NULL);
	return (token_v);
}
