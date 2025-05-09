/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:59:16 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/04 13:59:19 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "frase de efeito aqui";
// 	char str2[] = "Frase De Efeito Aqui";
// 	char str3[] = "FRASE de EFEITO aqui";

// 	printf("%s\n", ft_strupcase(str1));
// 	printf("%s\n", ft_strupcase(str2));
// 	printf("%s\n", ft_strupcase(str3));
// 	return (0);
// }