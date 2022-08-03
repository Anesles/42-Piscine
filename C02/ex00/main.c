#include <stdio.h>

char    *ft_strcpy(char *dest, char*src);

int main(void)
{
    char dest[] = "destination";
    char src[] = "source";
    char *d;

    d = ft_strcpy(dest, src);
    printf("%s\n", d);
}