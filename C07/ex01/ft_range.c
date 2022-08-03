/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:58:13 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/29 11:57:50 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*res;
	int	i;

	if (min >= max)
		return (0);
	length = 0;
	while ((length + min) < max)
		length++;
	res = (int *)malloc(sizeof(int) * length);
	i = 0;
	while(min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

int main()
{
	int	*resposta;
	int 	min = 2;
	int 	max = 10;
	int	i = 0;

	resposta = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", resposta[i]);
		i++;
	}
}
