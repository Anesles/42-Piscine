/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:07:32 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/04 15:43:54 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_delimiter(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == 0)
		return (1);
	return (0);
}

char	**ft_alloc(char	*str)
{
	int		i;
	int		j;
	int		count;
	char	**arr;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			j = i;
			while (!ft_is_delimiter(str[j]))
				j++;
			count++;
			i = j;
		}
		i++;
	}
	arr = (char **) malloc(sizeof(char *) * count);
	return (arr);
}

char	**ft_get_size_words(char **arr, char *str)
{
	int	i;
	int	j;
	int	count;
	int	size;
	
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			j = i;
			size = 0;
			while (!ft_is_delimiter(str[j]))
			{
				size++;
				j++;
			}
			arr[count] = (char *)malloc(sizeof(char) * size);
			count++;
			i = j;
		}
		i++;
	}
	return (arr);
}

char	**ft_get_words(char **arr, char *str)
{
	int	i;
	int	j;
	int	k;
	int	count;
	
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			j = i;
			k = 0;
			while (!ft_is_delimiter(str[j]))
			{
				arr[count][k] = str[j];
				k++;
				j++;
			}
			count++;
			i = j;
		}
		i++;
	}
	return (arr);
}

char	**ft_split(char *str)
{
	char	**arr;

	arr = ft_alloc(str);
	arr = ft_get_size_words(arr, str);
	arr = ft_get_words(arr, str);
}