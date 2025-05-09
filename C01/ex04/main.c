#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int x;
	int y;

	x = 10;
	y = 3;

	ft_ultimate_div_mod(&x, &y);
	printf("Resultado da divisão: %d\n", x);
	printf("Resultado do módulo: %d\n", y);
	return (0);
}
