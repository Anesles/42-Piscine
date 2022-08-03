/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify2_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:39:55 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 11:39:57 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if2_2col(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 2 && cold[i] == 2)
		{
			if (map[0][i] == 2 && map[2][i] == 4)
			{
				map[1][i] = 1;
				map[3][i] = 3;
			}
			else if (map[1][i] == 4 && map[3][i] == 2)
			{
				map[0][i] = 3;
				map[2][i] = 1;
			}
		}
		i++;
	}
}

void	if2_2row(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 2 && rowr[i] == 2)
		{
			if (map[i][0] == 2 && map[i][2] == 4)
			{
				map[i][1] = 1;
				map[i][3] = 3;
			}
			else if (map[i][1] == 4 && map[i][3] == 2)
			{
				map[i][0] = 3;
				map[i][2] = 1;
			}
		}
		i++;
	}
}

void	if2_2col2(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 2 && cold[i] == 2)
		{
			if (map[2][i] == 4 && (map[3][i] == 2 || map[3][i] == 1))
			{
				map[0][i] = 3;
				if (map[3][i] == 2)
					map[1][i] = 1;
				else
					map[1][i] = 2;
			}
			else if (map[1][i] == 4 && (map[0][i] == 2 || map[0][i] == 1))
			{
				map[3][i] = 3;
				if (map[0][i] == 2)
					map[2][i] = 1;
				else
					map[2][i] = 2;
			}
		}
		i++;
	}
}

void	if2_2row2(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 2 && rowr[i] == 2)
		{
			if ((map[i][3] == 2 || map[i][3] == 1) && map[i][2] == 4)
			{
				map[i][0] = 3;
				if (map[i][3] == 2)
					map[i][1] = 1;
				else
					map[i][1] = 2;
			}
			else if (map[i][1] == 4 && (map[i][0] == 2 || map[i][0] == 1))
			{
				map[i][3] = 3;
				if (map[i][0] == 2)
					map[i][2] = 1;
				else
					map[i][2] = 2;
			}
		}
		i++;
	}
}
