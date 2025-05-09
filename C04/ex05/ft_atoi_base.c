/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:26:26 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/06 19:21:35 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi_base(char *str, char *base);
int	valid_base(char *base);
int	index_base(char c, char *base);
int	ft_strlen(char *str);

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
	i++;
	}
	return (i >= 2);
}

int	index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	i = 0;
	sign = 1;
	result = 0;
	if (!valid_base(base))
		return (0);
	base_len = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (index_base(str[i], base) != -1)
	{
		result = result * base_len + index_base(str[i], base);
		i++;
	}
	return (result * sign);
}

// 
// void	ft_putnbr(int nb);
// void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		nb = nb % 10;
// 		ft_putchar(nb + '0');
// 	}
// 	else
// 		ft_putchar(nb + 48);
// }

// int	main(void)
// {
// 	ft_putnbr(ft_atoi_base("   ---1010", "01")); // → -10
// 	write(1, "\n", 1);
// 	ft_putnbr(ft_atoi_base("  +1A", "0123456789ABCDEF")); // → 26
// 	write(1, "\n", 1);
// 	ft_putnbr(ft_atoi_base(" -42", "0123456789")); // → -42
// 	write(1, "\n", 1);
// 	ft_putnbr(ft_atoi_base(" ZZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ")); // → 701
// 	write(1, "\n", 1);
// 	ft_putnbr(ft_atoi_base("42", "112345")); // base inválida → 0
// 	write(1, "\n", 1);
// }