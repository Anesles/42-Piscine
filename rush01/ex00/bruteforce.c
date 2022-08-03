/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:18:21 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/24 12:29:16 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkcountc(int c, int i, int map[4][4], int countc)
{
	if (map[i][c] == 0)
		countc++;
	return (countc);
}

int	checkcountr(int r, int i, int map[4][4], int countr)
{
	if (map[r][i] == 0)
		countr++;
	return (countr);
}

int	ft_checkvalidvalues(int map[4][4], int r, int c)
{
	int	i;
	int	sumc;
	int	sumr;
	int	countc;
	int	countr;

	i = -1;
	sumr = 0;
	sumc = 0;
	countc = 0;
	countr = 0;
	while (++i < 4)
	{
		countc = checkcountc(c, i, map, countc);
		countr = checkcountr(r, i, map, countr);
		sumr += map[r][i];
		sumc += map[i][c];
	}
	if (sumc < 10 && countc == 1)
	{
		map[r][c] = 10 - sumc;
		return (1);
	}
	else if (sumr < 10 && countr == 1)
	{
		map[r][c] = 10 - sumr;
		return (1);
	}
	return (0);
}

void	ft_checkeasyvalues(int map[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (map[i][j] == 0)
			{
				if (ft_checkvalidvalues(map, i, j))
					ft_checkeasyvalues(map);
			}
			j++;
		}
		i++;
	}
}
