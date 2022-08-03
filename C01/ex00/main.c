#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int *nbr;
	int number;

	number = 0;
	nbr = &number;
	ft_ft(nbr);
	printf("%d\n", *nbr);
	return 0;
}
