/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:22:37 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/23 10:07:19 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_fill(int len, int count, int n, char *fill)
{
	int	i;

	i = len;
	while (count < len)
	{
		fill[i - 1] = n % 10 + '0';
		n = n / 10;
		count++;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*new;
	int		len;
	int		count;

	len = ft_numlen(n);
	new = malloc(sizeof (char) * (len + 1));
	if (!new)
		return (NULL);
	count = 0;
	if (n == -2147483648)
	{
		new[0] = '-';
		new[1] = '2';
		n = 147483648;
		count = 2;
	}
	if (n < 0)
	{
		new[0] = '-';
		count = 1;
		n = -n;
	}
	ft_fill(len, count, n, new);
	new[len] = '\0';
	return (new);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_itoa(0));
	return (0);
}*/