/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:24:51 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/20 09:29:33 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_dec2hex(int x)
{
	int	i;
	int	mod;
	char	hex[2];

	i = 0;
	while (x != 0)
	{
		mod = x % 16;
		if (mod < 10)
            hex[i++] = 48 + mod;
        else
            hex[i++] = 55 + mod;
        x = x / 16;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int temp;
	int temp2;
	char	*hex;

	i = 0;
	while (str[i] != 0)
	{
		if(str[i] < 32)
		{
			temp = str[i];
			hex = ft_dec2hex(temp);
			str[i] = 92;
			temp = str[i + 1];
			temp2 = str[i + 2];
			str[i + 1] = hex[0];
			str[i + 2] = hex[1];
		}
	}
}