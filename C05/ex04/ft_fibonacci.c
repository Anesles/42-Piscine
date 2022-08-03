/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:49:32 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/28 15:06:05 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n", ft_fibonacci(-8));
	printf("%d\n", ft_fibonacci(46));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(10));
}
*/
