#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int i;
	int n;
	int size;
	int tab[10] = {6, 3, 8, 0, 2, 1, 4, 8, 4, 3};

	size = 10;
	ft_sort_int_tab(tab, size);
	
	printf("Array= ");
	i = 0;
	while(i < size)
	{
		n = tab[i];
		printf("%d, ", n);
		i++;
	}
	printf("\n");
}