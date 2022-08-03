#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int t;
	char str[20] = "Ola ola";

	t = ft_strlen(str);
	printf("String size: %d\n", t);
}