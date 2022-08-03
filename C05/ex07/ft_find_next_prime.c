/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:57:04 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/28 11:57:48 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
		return (0);
	while (prime <= nb / 2)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && (ft_is_prime(nb) == 0))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2147483699));
	printf("%d\n", ft_find_next_prime(-2147483648));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(97));
}
*/