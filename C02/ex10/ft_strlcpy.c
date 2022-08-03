/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:48:36 by brumarti          #+#    #+#             */
/*   Updated: 2022/07/21 19:03:20 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_getsize(char	*str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;
	unsigned int	len_src;

	len_src = ft_getsize(src);
	count = 0;
	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
			count++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dest[] = "As";
	char str[] = "So isto";
	int	res;
	
	res = ft_strlcpy(dest, str, 10);
	printf("String: %s; Return: %d\n", dest, res);
	char dest2[] = "As";
	char str2[] = "So isto";
	res = strlcpy(dest2, str2, 10);
}
