/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:32:13 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 12:30:09 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	print_map(int map[4][4]);
void	ft_trueconditions(int col[16], int map[4][4]);
void	ft_checkeasyvalues(int map[4][4]);
void	ft_madconditions(int col[16], int map[4][4]);
void	show_error(void);
int		ft_validmap(int col[16], int map[4][4]);

void	ft_initialize(int col[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			col[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_solve(int col[16])
{
	int	map[4][4];
	int	i;
	int	j;

	ft_initialize(map);
	ft_trueconditions(col, map);
	ft_madconditions(col, map);
	ft_checkeasyvalues(map);
	if (ft_validmap(col, map))
		print_map(map);
	else
		show_error();
}
