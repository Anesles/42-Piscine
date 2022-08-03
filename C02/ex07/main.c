#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str[] = "abcdefg12";
	char *res;

	printf("Before: %s; ", str);
	res = ft_strupcase(str);
	printf("After: %s", res);
}
