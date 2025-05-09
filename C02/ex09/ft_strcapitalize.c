/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:15:57 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/04 14:21:05 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	r;

		i = 0;
		r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (r)
				str[i] -= 32;
			r = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			r = 0;
		else
			r = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
// 	char str2[] = "Frase De Efeito Aqui";
// 	char str3[] = "FRASE de EFEITO aqui";

// 	printf("%s\n", ft_strcapitalize(str1));
// 	printf("%s\n", ft_strcapitalize(str2));
// 	printf("%s\n", ft_strcapitalize(str3));
// 	return (0);
// }