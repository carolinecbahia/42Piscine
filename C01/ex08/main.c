#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[] = { -1, 6, 7, 3, -6, 7, 2, 4, 5, 2147483647, -2147483648 };
	int size = 11;

	ft_sort_int_tab(tab, size);

	int i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}
