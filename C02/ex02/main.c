#include <stdio.h>

int ft_str_is_alpha(char *str);

int main (void)
{
	char str[] = "Olaola";
	char str2[] = "";
	int res;

	res = printf("%d", ft_str_is_alpha(str));
	res = printf("%d", ft_str_is_alpha(str2));
}
