#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf("Resultado da divisão: %d\n", div);
	printf("Resultado do módulo: %d\n", mod);
	return (0);
}
