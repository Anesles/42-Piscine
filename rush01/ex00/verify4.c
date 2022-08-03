/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:35:14 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 09:35:16 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_if4col(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 4)
		{
			map[0][i] = 1;
			map[1][i] = 2;
			map[2][i] = 3;
			map[3][i] = 4;
		}
		else if (cold[i] == 4)
		{
			map[0][i] = 4;
			map[1][i] = 3;
			map[2][i] = 2;
			map[3][i] = 1;
		}
		i++;
	}
}

void	ft_if4row(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 4)
		{
			map[i][0] = 1;
			map[i][1] = 2;
			map[i][2] = 3;
			map[i][3] = 4;
		}
		else if (rowr[i] == 4)
		{
			map[i][0] = 4;
			map[i][1] = 3;
			map[i][2] = 2;
			map[i][3] = 1;
		}
		i++;
	}
}

void	fill4(int r, int map[4][4])
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (map[i][j] == 4)
				break ;
			if (i == 3)
			{
				map[r][j] = 4;
			}
			i++;
		}
		j++;
	}
}

void	ft_if_no_4(int map[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (map[i][j] == 4)
				break ;
			if (j == 3)
			{
				fill4(i, map);
			}
			j++;
		}
		i++;
	}
}
