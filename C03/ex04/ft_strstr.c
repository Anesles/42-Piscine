/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:12:30 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/26 15:10:11 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if(to_find[0] == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j])
		{
			if (to_find[j + 1] == 0)
				return(&str[i]);
			j++;	
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*str = "Ola bem bem-vindo Ola";
	char	*to_find = "bem-vindo";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}
*/