#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "ABCDEFG12";
	char *res;

	printf("Before: %s; ", str);
	res = ft_strlowcase(str);
	printf("After: %s", res);
}
