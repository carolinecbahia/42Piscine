/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:59:39 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/08 11:45:57 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	base;

	base = 1;
	while ((base * base) <= nb)
	{	
		if ((base * base) == nb)
			return (base);
		base++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	int num = 20;
// 	printf("a raiz quadrada de %d e %d:", num, ft_sqrt(num));
// 	return (0);
// }