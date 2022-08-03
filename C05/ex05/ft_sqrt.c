/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:12:04 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/28 11:22:10 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n > 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-2147483648));
	printf("%d\n", ft_sqrt(-2));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(99840064));
	printf("%d\n", ft_sqrt(100000000));
}
*/