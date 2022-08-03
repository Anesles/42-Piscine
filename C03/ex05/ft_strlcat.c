/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:29:10 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/26 18:04:55 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getsize(char	*str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	len_dest;
	unsigned int	index_dest;

	len_dest = ft_getsize(dest);
	if (len_dest > size)
		return (ft_getsize(src) + size);
	index = 0;
	index_dest = len_dest;
	while(src[index] && index_dest < size - 1)
	{
		dest[index_dest] = src[index];
		index_dest++;
		index++;
	}
	dest[index_dest] = 0;
	return (ft_getsize(dest) + ft_getsize(&src[index]));
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char	dst[20] = "";
	char	str[20] = "";

	printf("String: %s; Return: %d\n", dst, ft_strlcat(dst, str, 69));
	char	dst2[20] = "";
	printf("String: %s; Return: %ld\n", dst2, strlcat(dst2, str, 69));
}

