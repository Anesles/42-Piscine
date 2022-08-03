#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "ola ola, eu-sou=muita}bonito]fodasse";
	char	*res;

	res = ft_strcapitalize(str);
	printf("%s\n", res);
}