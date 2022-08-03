/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:28:15 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/24 09:28:17 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_solve(int *col);

void	show_error(void);

void	ft_solve(int col[16]);

int		ft_checkvalid(char *arg);

int		ft_setvalues(int *c, char *arg);

int	main(int argc, char **argv)
{
	int	columns[16];
	int	i;

	i = 0;
	if (argc != 2)
		show_error();
	else if (ft_checkvalid(argv[1]))
	{
		ft_setvalues(columns, argv[1]);
		ft_solve(columns);
	}
	else
		show_error();
}
