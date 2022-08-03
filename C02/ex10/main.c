#include <stdio.h>
#include <bsd/string.h>

int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[] = "As";
	char str[] = "So isto";
	int	res;
	
	res = ft_strlcpy(dest, str, 2);
	printf("String: %s; Return: %d\n", dest, res);
	dest[0] = 'A';
	dest[1] = 's';
	res = strlcpy(dest, str, 2);
	printf("String: %s; Return: %d\n", dest, res);
}
