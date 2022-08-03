#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int *a;
	int *b;
	int number1;
	int number2;

	number1 = 20;
	number2 = 40;
	a = &number1;
	b = &number2;
	ft_swap(a, b);
	printf("a: %d; b: %d",*a,*b);
	return 0;
}
