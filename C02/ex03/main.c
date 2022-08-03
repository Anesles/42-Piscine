#include <stdio.h>

int ft_str_is_numeric(char *str);

int main (void)
{
	char str[] = "12345";
	char str2[] = "papap";
	int res;

	res = printf("%d", ft_str_is_numeric(str));
	res = printf("%d", ft_str_is_numeric(str2));
}
