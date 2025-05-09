/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:58:31 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/04 13:58:33 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *srt);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("134567890"));
// 	printf("%d\n", ft_str_is_numeric("abc1234"));
// 	printf("%d\n", ft_str_is_numeric("abcdefg"));
// 	printf("%d\n", ft_str_is_numeric(""));
// 	return (0);
// }