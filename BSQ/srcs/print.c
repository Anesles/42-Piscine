/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:40:58 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 14:36:50 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_print_map(char **map)
{
	int	i;

	i = 0;
	while (i < g_l)
	{
		ft_putstr(map[i]);
		i++;
	}
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
