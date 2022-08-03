/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:00:59 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 10:01:00 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_if1col(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 1)
		{
			map[0][i] = 4;
		}
		else if (cold[i] == 1)
		{
			map[3][i] = 4;
		}
		i++;
	}
}

void	ft_if1row(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 1)
		{
			map[i][0] = 4;
		}
		else if (rowr[i] == 1)
		{
			map[i][3] = 4;
		}
		i++;
	}
}
