/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:22:55 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/18 16:12:48 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	while (i < size)
	{
		k = i + 1;
		while (k < size)
		{
			if (tab[i] > tab[k])
			{
				temp = tab[i];
				tab[i] = tab[k];
				tab[k] = temp;
			}
			k++;
		}
		i++;
	}
}
