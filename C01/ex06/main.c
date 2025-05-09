#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str;
	int tam;

	str = "Piscina";
	tam = ft_strlen(str);
	printf("O comprimento da string \"%s\" é: %d\n", str, tam);

	return (0);
}
