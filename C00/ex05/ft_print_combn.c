/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:28:52 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/15 16:31:00 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_put3(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	if ((d1 != '7') || (d2 != '8') || (d3 != '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(void)
{
	char	dig1;
	char	dig2;
	char	dig3;

	dig1 = '0';
	while (dig1 <= '7')
	{
		dig2 = dig1 + 1;
		while (dig2 <= '8')
		{
			dig3 = dig2 + 1;
			while (dig3 <= '9')
			{
				ft_put3(dig1, dig2, dig3);
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
}
