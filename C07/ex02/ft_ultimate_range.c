/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:04:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/30 11:19:51 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*buffer;

	size = max - min;
	if (size < 0)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc(sizeof(int) * size);
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < size)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int		main(void)
{
	int i;
	int *tab;
	int min;
	int max;
	int size;

	min = 0;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
			printf("%d\n", tab[i]);
	}
	else
		printf("error");
	printf("Size: %d\n", size);
}
*/