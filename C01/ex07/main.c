#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int i;

	int arr[5] = {1, 2, 3, 4, 5};
	i = 0;
	ft_rev_int_tab(arr, 5);
	printf("A string invertida é:");
	while(i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
