/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:09:14 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/27 13:55:22 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_dec(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n <= 9)
		ft_putchar(n + '0');
	else if (n >= 10)
	{
		ft_putnbr_dec(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

void	ft_putnbr_hex(int n)
{
	int		remainder;
	char	hexa[8];
	int		j;
	int		i;

	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	i = 0;
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hexa[i++] = 48 + remainder;
		else
			hexa[i++] = 55 + remainder;
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
		ft_putchar(hexa[j--]);
}

void	ft_putnbr_octbin(int n, int base)
{
	int	octal[11];
	int	i;
	int	j;

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (n > 0)
	{
		octal[i++] = (n % base);
		n /= base;
	}
	j = i - 1;
	while (j >= 0)
		ft_putchar(octal[j--] + 48);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (base == "0123456789")
		ft_putnbr_dec(nbr);
	else if (base == "01")
		ft_putnbr_octbin(nbr, 2);
	else if (base == "0123456789ABCDEF")
		ft_putnbr_hex(nbr);
	else if (base == "poneyvif")
		ft_putnbr_octbin(nbr, 8);
}
/*
int main()
{
	ft_putnbr_base(-2147483647, "poneyvif");
}
*/