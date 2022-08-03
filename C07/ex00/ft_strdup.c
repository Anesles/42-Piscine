/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:24:34 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/28 21:29:05 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while(str[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	int	size_src;
	int	i;

	i = 0;
	size_src = ft_strlen(src);
	ret = (char *)malloc(sizeof(*src) * (size_src + 1));
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = 0;
	return (ret); 
}

int	main()
{
	char *test;
	char *dup;

	test = "Testando a função strdup!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
