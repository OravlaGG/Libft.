/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:23:56 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/12 13:23:42 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Check if the character is represented in the ascii table*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_isprint(2));
	return (0);
}*/