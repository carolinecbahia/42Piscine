/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:57:13 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/07 18:46:58 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fat;

	if (nb < 0)
		return (0);
	fat = 1;
	i = 2;
	while (i <= nb)
	{
		fat = fat * i;
		i++;
	}
	return (fat);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(4));
// 	printf("%d\n", ft_iterative_factorial(5));
// 	printf("%d\n", ft_iterative_factorial(-2));
// 	return (0);
// }