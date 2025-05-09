/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:58:22 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/04 13:58:24 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("Teste"));
// 	printf("%d\n", ft_str_is_alpha("teste123"));
// 	printf("%d\n", ft_str_is_alpha("123456"));
// 	printf("%d\n", ft_str_is_alpha(""));
// 	return (0);
// }