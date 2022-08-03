/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:40:58 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/28 14:59:39 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power < 1 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
int main()
{
	printf("%d\n", ft_recursive_power(10,0));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(0,10));
	printf("%d\n", ft_recursive_power(1,-2));
	printf("%d\n", ft_recursive_power(-2,2));
	printf("%d\n", ft_recursive_power(2,3));
}
*/
