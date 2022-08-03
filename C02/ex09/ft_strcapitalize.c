/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:39:42 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/21 12:05:50 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++; 
	}
	return (str);
}

int	check_special(char ch)
{
	if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
		return (0);
	else if (ch >= 48 && ch <= 57)
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	str = ft_strlowcase(str);
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (i == 0 && (str[i] <= 122 && str[i] >= 97))
			str[i] -= 32;
		else if (str[i] <= 122 && str[i] >= 97)
		{
			if (check_special(str[i - 1]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "ola OLA, eu-sou=MUITA}bonito]fodasse";
	char	*res;

	res = ft_strcapitalize(str);
	printf("%s\n", res);
}
