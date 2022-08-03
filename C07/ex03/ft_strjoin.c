/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:38:24 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/30 11:29:43 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i= 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_fulllength(char **str, int size, int size_sep)
{
	int	index;
	int	full_length;

	full_length = 0;
	index = 0;
	while(index < size)
	{
		full_length += ft_strlen(str[index]);
		full_length += size_sep;
		index++;
	}
	full_length -= size_sep;
	return (full_length);
}

char	*ft_strcat(char *str, char *to_cat)
{
	int	index;
	
	index = 0;
	while(to_cat[index])
	{
		str[index] = to_cat[index];
		index++;
	}
	str[index] = 0;
	return(str);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	int	index;
	int	full_length;
	char	*finalstr;
	char	*temp;
	
	if (size == 0)
		return((char *)malloc(sizeof(char)));
	full_length = ft_fulllength(str, size, ft_strlen(sep));
	temp = (finalstr = (char *)malloc((full_length + 1) * sizeof(char)));
	if (temp == 0)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcat(temp, str[index]);
		temp += ft_strlen(str[index]);
		if (index != (size - 1))
		{
			ft_strcat(temp, sep);
			temp += ft_strlen(sep);
		}
		index++;
	}
	*temp = 0;
	return (finalstr);
}

int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
}