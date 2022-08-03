#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main (void)
{
	char str[] = "PAPAP";
	char str2[] = "papap";
	int res;

	res = printf("%d", ft_str_is_lowercase(str));
	res = printf("%d", ft_str_is_lowercase(str2));
}
