#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size;
	int i;
	int n;
	int tab[11] = {10, 9, 8, 7, 6 ,5 ,4, 3, 2, 1, 0};
	
	size = 11;
	ft_rev_int_tab(tab, size);
	i = 0;
	printf("Array= ");
	while(i < size)
	{
		n = tab[i];
		printf("%d, ", n);
		i++;
	}
	printf("\n");
}