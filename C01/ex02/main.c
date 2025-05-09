#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 4;
	y = 7;

	ft_swap(x, y);
	printf("%d\n", x);
	return (0);
}
