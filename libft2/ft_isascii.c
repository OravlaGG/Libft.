/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:56:51 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/12 13:21:58 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Check if the character is represented in the ascii table*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_isascii(400));
	return (0);
}*/