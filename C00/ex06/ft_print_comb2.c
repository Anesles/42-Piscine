/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:12:09 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/15 16:33:26 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printc(char c1, char c2)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_itoc(int n, int max)
{
	char	c1;
	char	c2;

	if (n <= 9)
	{
		c1 = '0';
		c2 = n + '0';
		ft_printc(c1, c2);
	}
	else if (n <= max)
	{
		c1 = (n / 10) + '0';
		c2 = (n % 10) + '0';
		ft_printc(c1, c2);
	}
}

void	ft_printfull(int n1, int n2)
{
	ft_itoc(n1, 98);
	write(1, " ", 1);
	ft_itoc(n2, 99);
	if (n1 != 98 || n2 != 99)
	{
		ft_printc(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_printfull(n1, n2);
			n2++;
		}
		n1++;
	}
}
