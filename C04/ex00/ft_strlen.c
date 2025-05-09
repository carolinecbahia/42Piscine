/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:10:49 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/05 11:15:51 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str;
// 	int tam;

// 	str = "Piscina";
// 	tam = ft_strlen(str);
// 	printf("O comprimento da string \"%s\" é: %d\n", str, tam);

// 	return (0);
// }