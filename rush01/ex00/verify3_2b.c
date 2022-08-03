/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify3_2b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:29:43 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/24 18:29:44 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if3_2col3(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 3 && cold[i] == 2)
		{
			if (map[2][i] == 4 && map[0][i] == 2)
			{
				map[1][i] = 3;
				map[3][i] = 1;
			}
		}
		else if (colu[i] == 2 && cold[i] == 3)
		{
			if (map[1][i] == 4 && map[3][i] == 2)
			{
				map[0][i] = 1;
				map[2][i] = 3;
			}
		}
		i++;
	}
}

void	if3_2row3(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 3 && rowr[i] == 2)
		{
			if (map[i][2] == 4 && map[i][0] == 2)
			{
				map[i][1] = 3;
				map[i][3] = 1;
			}
		}
		else if (rowl[i] == 2 && rowr[i] == 3)
		{
			if (map[i][1] == 4 && map[i][3] == 2)
			{
				map[i][0] = 1;
				map[i][2] = 3;
			}
		}	
		i++;
	}
}

void	if3_2col4(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 3 && cold[i] == 2)
		{
			if (map[2][i] == 4 && map[1][i] == 2)
				map[0][i] = 1;
		}
		else if (colu[i] == 2 && cold[i] == 3)
		{
			if (map[1][i] == 4 && map[2][i] == 2)
				map[3][i] = 1;
		}
		i++;
	}
}

void	if3_2row4(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 3 && rowr[i] == 2)
		{
			if (map[i][2] == 4 && map[i][1] == 2)
				map[i][0] = 1;
		}
		else if (rowl[i] == 2 && rowr[i] == 3)
		{
			if (map[i][1] == 4 && map[i][2] == 2)
				map[i][3] = 1;
		}
		i++;
	}
}
