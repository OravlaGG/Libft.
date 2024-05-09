/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:43:11 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/12 13:22:29 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function check if the char is between 0 and 9.If it is return 1 else 0 */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_isdigit('3'));
	return (0);
}*/