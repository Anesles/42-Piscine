/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:34:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/27 13:56:43 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "\n";
	printf("Tamanho: %d\n", ft_strlen(str));
	printf("Tamanho: %ld\n", strlen(str));
}
*/