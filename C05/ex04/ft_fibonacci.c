/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:59:14 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/08 11:33:20 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d", ft_fibonacci(7));
// 	return (0);
// }
// //1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144