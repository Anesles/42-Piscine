/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:25:26 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 09:25:28 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	div_cols(int colu[4], int cold[4], int col[16]);
void	div_rows(int rowl[4], int rowr[4], int col[16]);

int	ft_validmap(int col[16], int map[4][4])
{
	int	colu[4];
	int	cold[4];
	int	rowl[4];
	int	rowr[4];
	int	i;

	div_cols(colu, cold, col);
	div_rows(rowl, rowr, col);
	i = 0;
	while (i < 4)
	{
		if ((colu[i] + cold[i]) > 5)
			return (0);
		if ((rowl[i] + rowr[i]) > 5)
			return (0);
		if ((colu[i] + cold[i]) < 3)
			return (0);
		if ((rowl[i] + rowr[i]) < 3)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkvalid(char *arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*arg)
	{
		if (i % 2 == 0)
		{
			if ((*arg <= '4') && (*arg >= '1'))
				count++;
			else
				return (0);
		}
		arg++;
		i++;
	}
	if (count == 16 && i == 31)
		return (1);
	return (0);
}

void	show_error(void)
{
	write(1, "Error\n", 6);
}
