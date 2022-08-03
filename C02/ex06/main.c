#include <stdio.h>

int ft_str_is_printable(char *str);

int main (void)
{
	char str[] = "\n\n\n";
	char str2[] = "papaz";
	int res;

	res = printf("%d", ft_str_is_printable(str));
	res = printf("%d", ft_str_is_printable(str2));
}
