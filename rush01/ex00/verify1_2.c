/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify1_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:10:42 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 10:10:46 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if1_2col(int colu[4], int cold[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colu[i] == 1 && cold[i] == 2)
		{
			map[0][i] = 4;
			map[3][i] = 3;
		}
		else if (colu[i] == 2 && cold[i] == 1)
		{
			map[0][i] = 3;
			map[3][i] = 4;
		}
		i++;
	}
}

void	if1_2row(int rowl[4], int rowr[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rowl[i] == 1 && rowr[i] == 2)
		{
			map[i][0] = 4;
			map[i][3] = 3;
		}
		else if (rowl[i] == 2 && rowr[i] == 1)
		{
			map[i][0] = 3;
			map[i][3] = 4;
		}
		i++;
	}
}
