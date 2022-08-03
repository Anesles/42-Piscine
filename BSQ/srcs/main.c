/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:40:50 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 17:11:56 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_start_map(char *str)
{
	char	**map;

	map = ft_get_map(str);
	map = ft_solve(map);
	ft_print_map(map);
	free (map);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc != 1)
	{
		while (i < argc)
		{
			if (!map_error(argv[i]))
				ft_start_map(argv[i]);
			if (i != argc -1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
