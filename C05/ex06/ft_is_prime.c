/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:10:55 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 09:56:29 by brumarti         ###   ########.fr       */
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

#include <stdio.h>

int main()
{
	printf("%d\n", ft_is_prime(-2));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(-2147483648));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(97));
}
