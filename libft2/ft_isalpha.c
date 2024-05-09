/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:16:46 by alvargom          #+#    #+#             */
/*   Updated: 2024/04/12 13:21:08 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Check if c is alphabetic. If it is return 1 else return 0*/
int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_isalpha('8'));
	return (0);
}*/