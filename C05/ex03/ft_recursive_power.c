/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:58:47 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/07 19:34:17 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power -1));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_recursive_power(2, 2));
// 	printf("%d\n", ft_recursive_power(3, 3));
// 	printf("%d\n", ft_recursive_power(3, 2));
// 	return (0);
// }