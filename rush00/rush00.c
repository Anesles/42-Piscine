/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:54:05 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/17 09:54:06 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	l;
	char	c;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c != 1 && c != x) && (l == 1 || l == y))
				ft_putchar('-');
			else if ((c == 1 || c == x) && (l == 1 || l == y))
				ft_putchar('o');
			else if ((l != 1 && l != y) && (c == 1 || c == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			c ++;
		}
		ft_putchar('\n');
		l++;
	}
}
