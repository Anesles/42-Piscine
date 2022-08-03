#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int n1;
	int n2;
	int *a;
	int	*b;

	n1 = 10;
	n2 = 3;
	a = &n1;
	b = &n2;
	printf("Before: a= %d; b= %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("After: a= %d; b= %d\n", *a, *b);
}