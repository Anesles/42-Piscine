/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:24:27 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 15:40:43 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_get_collumns(char *str)
{
	int		fd;
	int		size;
	char	c;

	fd = open(str, O_RDONLY);
	ft_place_second_line(fd);
	size = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		size++;
	}
	close(fd);
	return (size);
}

int	ft_get_lines_char(char *str)
{
	int		fd;
	char	c;
	int		i;
	int		num;
	int		size;

	size = ft_strlen(ft_get_first_line(str));
	i = 0;
	fd = open(str, O_RDONLY);
	if (fd != -1)
	{
		num = 0;
		while (read(fd, &c, 1) && (c >= '0' && c <= '9') && (i < size - 3))
		{
			num = num * 10 + (c - 48);
			i ++;
		}
		close(fd);
		if (num != 0)
			return (num);
	}
	return (0);
}

void	ft_place_second_line(int fd)
{
	char	c;

	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
	}
}

void	ft_read_map(char **buffer, int fd)
{
	int	i;

	i = 0;
	while (i < g_l)
	{
		read(fd, buffer[i], g_c + 1);
		buffer[i++][g_c] = '\0';
	}
}

char	**ft_get_map(char	*argv)
{
	int		fd;
	int		i;
	char	**buff;

	fd = open(argv, O_RDONLY);
	ft_place_second_line(fd);
	buff = (char **)malloc(g_l * sizeof(char *));
	i = 0;
	while (i < g_l)
	{
		buff[i] = (char *)malloc((g_c + 1) * sizeof(char));
		i++;
	}
	ft_read_map(buff, fd);
	close(fd);
	return (buff);
}
