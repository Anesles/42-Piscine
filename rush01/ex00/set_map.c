/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:20:54 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 09:20:56 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_if1col(int colu[4], int cold[4], int map[4][4]);
void	ft_if1row(int rowl[4], int rowr[4], int map[4][4]);
void	ft_if4col(int colu[4], int cold[4], int map[4][4]);
void	ft_if4row(int rowl[4], int rowr[4], int map[4][4]);
void	if1_2col(int colu[4], int cold[4], int map[4][4]);
void	if1_2row(int rowl[4], int rowr[4], int map[4][4]);
void	if3_2col(int colu[4], int cold[4], int map[4][4]);
void	if3_2row(int rowl[4], int rowr[4], int map[4][4]);
void	ft_if_no_4(int map[4][4]);
void	if2_2col(int colu[4], int cold[4], int map[4][4]);
void	if2_2row(int rowl[4], int rowr[4], int map[4][4]);
void	if3_1col(int colu[4], int cold[4], int map[4][4]);
void	if3_1row(int rowl[4], int rowr[4], int map[4][4]);
void	if3_2col2(int colu[4], int cold[4], int map[4][4]);
void	if3_2row2(int rowl[4], int rowr[4], int map[4][4]);
void	if3_1col2(int colu[4], int cold[4], int map[4][4]);
void	if3_1row2(int rowl[4], int rowr[4], int map[4][4]);
void	if2_2col2(int colu[4], int cold[4], int map[4][4]);
void	if2_2row2(int rowl[4], int rowr[4], int map[4][4]);
void	if3_2col3(int colu[4], int cold[4], int map[4][4]);
void	if3_2row3(int rowl[4], int rowr[4], int map[4][4]);
void	if3_2col4(int colu[4], int cold[4], int map[4][4]);
void	if3_2row4(int rowl[4], int rowr[4], int map[4][4]);
void	ft_if_no_3(int map[4][4]);

int	ft_setvalues(int *c, char *arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*arg)
	{
		if (i % 2 == 0)
		{
			c[j] = (*arg - 48);
			j++;
		}
		arg++;
		i++;
	}
}

void	div_cols(int colu[4], int cold[4], int col[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		if (i == 4)
			j = 0;
		if (i < 4)
			colu[j] = col[i];
		else if (i < 8)
			cold[j] = col[i];
		i++;
		j++;
	}
}

void	div_rows(int rowl[4], int rowr[4], int col[16])
{
	int	i;
	int	j;

	i = 8;
	j = 0;
	while (i < 16)
	{
		if (i == 12)
			j = 0;
		if (i < 12)
			rowl[j] = col[i];
		else if (i < 16)
			rowr[j] = col[i];
		i++;
		j++;
	}
}

void	ft_madconditions(int col[16], int map[4][4])
{
	int	colu[4];
	int	cold[4];
	int	rowl[4];
	int	rowr[4];

	div_cols(colu, cold, col);
	div_rows(rowl, rowr, col);
	if2_2col(colu, cold, map);
	if2_2row(rowl, rowr, map);
	if3_1col(colu, cold, map);
	if3_1row(rowl, rowr, map);
	if2_2col2(colu, cold, map);
	if2_2row2(rowl, rowr, map);
	if3_2col2(colu, cold, map);
	if3_2row2(rowl, rowr, map);
	if3_1col2(colu, cold, map);
	if3_1row2(rowl, rowr, map);
	if3_2col3(colu, cold, map);
	if3_2row3(rowl, rowr, map);
	if3_2col4(colu, cold, map);
	if3_2row4(rowl, rowr, map);
	ft_if_no_3(map);
}

void	ft_trueconditions(int col[16], int map[4][4])
{
	int	colu[4];
	int	cold[4];
	int	rowl[4];
	int	rowr[4];

	div_cols(colu, cold, col);
	div_rows(rowl, rowr, col);
	ft_if4col(colu, cold, map);
	ft_if4row(rowl, rowr, map);
	ft_if1col(colu, cold, map);
	ft_if1row(rowl, rowr, map);
	if1_2col(colu, cold, map);
	if1_2row(rowl, rowr, map);
	if3_2col(colu, cold, map);
	if3_2row(rowl, rowr, map);
	ft_if_no_4(map);
}
