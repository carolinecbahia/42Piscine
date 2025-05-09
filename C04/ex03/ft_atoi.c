/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:26:17 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/07 14:58:47 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;
	int	minus_count;

	i = 0;
	sign = 1;
	nb = 0;
	minus_count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	if (minus_count % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

// #include <unistd.h>

// void	ft_putchar(char c);
// void	ft_putnbr(int nb);

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void ft_putnbr(int nb)
// {
//     if (nb == -2147483648)
//     {
//         write(1, "-2147483648", 11);
//         return;
//     }
//     if (nb < 0)
//     {
//         ft_putchar('-');
//         nb = -nb;
//     }
//     if (nb >= 10)
//     {
//         ft_putnbr(nb / 10);
//         nb = nb % 10;
//     }
//     ft_putchar(nb + '0');
// }
// int main(void)
// {
//     int n;

//     n = ft_atoi("   --+-1-+-1235abc567");
//     ft_putnbr(n);
//     ft_putchar('\n');
//     return (0);
// }