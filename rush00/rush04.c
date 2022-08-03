/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:27:26 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/17 12:08:04 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x && x != 1 && y != 1))
				ft_putchar('A');
			else if ((c != 1 && c != x) && (l == 1 || l == y))
				ft_putchar('B');
			else if ((l == 1 && c == x) || (l == y && c == 1))
				ft_putchar('C');
			else if ((l != 1 && l != y) && (c == 1 || c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c ++;
		}
		ft_putchar('\n');
		l++;
	}
}
