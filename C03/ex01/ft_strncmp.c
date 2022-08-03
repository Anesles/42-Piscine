/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:29:04 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/25 17:52:16 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return 0;
	while (*s1 && *s2 && (*s1 == *s2) && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

int	main(void)
{
	printf("ft_strncmp\n");
	printf("%d should be %d \n", ft_strncmp("ab", "a ", 1),
		strncmp("ab", "a ", 1));
	printf("%d should be %d\n", ft_strncmp("a      ", "a ", 10),
		strncmp("a      ", "a ", 10));
	printf("%d should be %d\n", ft_strncmp("a", "a       ", 10),
		strncmp("a", "a       ", 10));
	printf("%d should be %d \n", ft_strncmp("ab", "a ", 2),
		strncmp("ab", "a ", 2));
	printf("%d should be %d \n", ft_strncmp("A", "a", 1),
		strncmp("A", "a", 1));
	printf("%d should be %d \n", ft_strncmp("a", "a", 1),
		strncmp("a", "a", 1));
	return (0);
}