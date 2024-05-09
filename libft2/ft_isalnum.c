/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:05:28 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/12 13:20:17 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Check if c is a digit or alphabetic. i f it is return 1 else 0*/

int	ft_isalnum(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')
		&& (c < '0' || c > '9'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_isalnum('+'));
	return (0);
}*/