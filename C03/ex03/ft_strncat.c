/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:07:51 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/22 09:26:47 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	max;
	unsigned int i;

	i = 0;
	max = 0;
	while (dest[max])
		max++;
	while (src[i] && i < nb)
	{
		dest[max + i] = src[i];
		i++;
	}
	dest[max + i] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s[30] = "olaolaola";
	char t[] = "olaolaola";
	char u[30] = "olaolaola";

	printf("%s\n", ft_strncat(s,t,4));
	printf("%s\n", strncat(u,t,4));
}
*/