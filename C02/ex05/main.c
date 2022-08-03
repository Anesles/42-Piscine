#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main (void)
{
	char str[] = "PAPAZ";
	char str2[] = "papaz";
	int res;

	res = printf("%d", ft_str_is_uppercase(str));
	res = printf("%d", ft_str_is_uppercase(str2));
}
