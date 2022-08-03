/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify3_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:05:19 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 12:05:21 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if3_1col(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 3 && cold[i] == 1)
		{
			if (map[2][i] == 3 && map[3][i] == 4)
			{
				map[0][i] = 2;
				map[1][i] = 1;
			}
		}
		else if (colu[i] == 1 && cold[i] == 3)
		{
			if (map[0][i] == 4 && map[1][i] == 3)
			{
				map[2][i] = 1;
				map[3][i] = 2;
			}
		}
		i++;
	}
}

void	if3_1row(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 3 && rowr[i] == 1)
		{
			if (map[i][2] == 3 && map[i][3] == 4)
			{
				map[i][0] = 2;
				map[i][1] = 1;
			}
		}
		else if (rowl[i] == 1 && rowr[i] == 3)
		{
			if (map[i][0] == 4 && map[i][1] == 3)
			{
				map[i][2] = 1;
				map[i][3] = 2;
			}
		}
		i++;
	}
}

void	if3_1col2(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 3 && cold[i] == 1)
		{
			if (map[1][i] == 1 && map[3][i] == 4)
			{
				map[0][i] = 2;
				map[2][i] = 3;
			}
		}
		else if (colu[i] == 1 && cold[i] == 3)
		{
			if (map[0][i] == 4 && map[2][i] == 1)
			{
				map[1][i] = 3;
				map[3][i] = 2;
			}
		}
		i++;
	}
}

void	if3_1row2(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 3 && rowr[i] == 1)
		{
			if (map[i][1] == 1 && map[i][3] == 4)
			{
				map[i][0] = 2;
				map[i][2] = 3;
			}
		}
		else if (rowl[i] == 1 && rowr[i] == 3)
		{
			if (map[i][0] == 4 && map[i][2] == 1)
			{
				map[i][1] = 3;
				map[i][3] = 2;
			}
		}
		i++;
	}
}
