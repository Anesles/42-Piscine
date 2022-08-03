/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:28:43 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 15:41:29 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_solve(char **map)
{
	int					**mapint;
	int					**cache;
	struct s_lastpos	result;

	mapint = ft_turnint(map);
	cache = ft_turnint(map);
	result = ft_largestsquare(mapint, cache);
	map = ft_correct_map(result, map);
	return (map);
}

struct s_lastpos	ft_largestsquare(int **map, int **cache)
{
	struct s_lastpos	result;
	int					i;
	int					j;

	result.length = 0;
	i = 0;
	while (i < g_l)
	{
		j = 0;
		while (j < g_c)
		{
			if (i != 0 && j != 0)
			{
				if (map[i][j] > 0)
					cache[i][j] = 1 + ft_get_min(cache[i][j - 1],
							cache[i - 1][j], cache[i - 1][j - 1]);
			}
			if (cache[i][j] > result.length)
				result = ft_assignvalues(i, j, cache[i][j]);
			j++;
		}
		i++;
	}
	return (result);
}

int	ft_get_min(int val1, int val2, int val3)
{
	if (val1 <= val2 && val1 <= val3)
		return (val1);
	else if (val2 <= val1 && val2 <= val3)
		return (val2);
	else
		return (val3);
}

struct s_lastpos	ft_assignvalues(int i, int j, int length)
{
	struct s_lastpos	result;

	result.length = length;
	result.x = i;
	result.y = j;
	return (result);
}

char	**ft_correct_map(struct s_lastpos pos, char	**map)
{
	int	i;
	int	j;

	i = pos.x;
	while (i >= (pos.x - (pos.length - 1)))
	{
		j = pos.y;
		while (j >= (pos.y - (pos.length - 1)))
		{
			map[i][j] = g_full;
			j--;
		}
		i--;
	}
	return (map);
}
