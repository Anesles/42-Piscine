/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:42:35 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 15:37:14 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	ft_get_char(char *argv, int opt)
{
	int		i;
	int		size;
	char	*str;

	str = ft_get_first_line(argv);
	size = (ft_strlen(str) - 1);
	i = size;
	while (i > (size - 3))
	{
		if (i == size && ft_is_printable(str[i]) && opt == 3)
			return (str[i]);
		if (i == (size - 1) && ft_is_printable(str[i]) && opt == 2)
			return (str[i]);
		if (i == (size - 2) && ft_is_printable(str[i]) && opt == 1)
			return (str[i]);
		i--;
	}
	return (0);
}

int	**ft_alloc(void)
{
	int	i;
	int	**mapint;

	mapint = (int **)malloc(sizeof(int *) * g_l);
	i = 0;
	while (i < g_l)
	{
		mapint[i] = (int *)malloc(sizeof(int) * g_c);
		i++;
	}
	return (mapint);
}

int	**ft_turnint(char	**map)
{
	int	i;
	int	j;
	int	**mapint;

	mapint = ft_alloc();
	i = 0;
	while (i < g_l)
	{
		j = 0;
		while (j < g_c)
		{
			if (map[i][j] == g_empty)
				mapint[i][j] = 1;
			else
				mapint[i][j] = 0;
			j++;
		}
		i++;
	}
	return (mapint);
}

int	ft_is_printable(char c)
{
	if (c >= 33 && c < 127)
		return (1);
	return (0);
}

char	*ft_get_first_line(char	*argv)
{
	char	*str;
	int		i;
	char	c;
	int		fd;

	str = malloc(sizeof(char) * 20);
	fd = open(argv, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1))
	{
		if (c != '\n')
		{
			str[i] = c;
			i++;
		}
		else
			break ;
	}
	close(fd);
	return (str);
}
