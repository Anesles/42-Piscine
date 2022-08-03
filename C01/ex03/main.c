#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	a;
	int	b;
	int	t_mod;
	int	t_div;
	int	*div;
	int	*mod;

	a = 10;
	b = 4;
	t_mod = 0;
	t_div = 0;
	div = &t_div;
	mod = &t_mod;

	ft_div_mod(a, b, div, mod);
	printf("div: %d; mod: %d", *div, *mod);
	return 0;	
}
