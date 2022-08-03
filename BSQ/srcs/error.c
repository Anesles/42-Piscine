/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:41:10 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 17:11:46 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	g_obstacle;
char	g_full;
char	g_empty;
int		g_l;
int		g_c;

int	map_error(char *argv)
{
	int	fd;

	fd = open(argv, O_RDONLY);
	if (fd != -1)
	{
		g_l = ft_get_lines_char(argv);
		g_c = ft_get_collumns(argv);
		g_empty = ft_get_char(argv, 1);
		g_obstacle = ft_get_char(argv, 2);
		g_full = ft_get_char(argv, 3);
		if (g_l != 0 && g_c != 0)
		{
			if (g_empty != 0 && g_obstacle != 0 && g_full != 0)
			{
				if (ft_get_lines_char(argv) == ft_get_line_error(argv))
				{
					if (ft_check_chars(argv))
						return (0);
				}
			}
		}
	}
	close(fd);
	write(1, "map error\n", 10);
	return (1);
}

int	ft_get_line_error(char *argv)
{
	int		fd;
	int		size;
	char	c;

	fd = open(argv, O_RDONLY);
	ft_place_second_line(fd);
	size = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n' || c == '\0')
			size++;
	}
	close(fd);
	return (size);
}

int	ft_check_chars(char	*argv)
{
	int		fd;
	int		j;
	char	c;

	fd = open(argv, O_RDONLY);
	ft_place_second_line(fd);
	j = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			j = 0;
			continue ;
		}
		else if (c != g_empty && c != g_obstacle && (j != g_c - 1))
		{
			close(fd);
			return (0);
		}
		j++;
	}
	close(fd);
	return (1);
}
