#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char dest[] = "Aqui aqui aqui";
	char str[] = "So isto";
	char *res;
	
	res = ft_strncpy(dest, str, 10);
	printf("%s\n", res);
	res = strncpy(dest, str, 10);
	printf("%s\n", res);
}
