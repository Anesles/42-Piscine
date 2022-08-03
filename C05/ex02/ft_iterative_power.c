/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:05:23 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/26 17:23:03 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}
/*
int main()
{
	printf("%d\n", ft_iterative_power(10,0));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(0,10));
	printf("%d\n", ft_iterative_power(1,-2));
	printf("%d\n", ft_iterative_power(-2,2));
	printf("%d\n", ft_iterative_power(2,2147483647));
	printf("%d\n", ft_iterative_power(2,3));
}
*/
