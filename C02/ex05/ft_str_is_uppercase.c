/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:58:45 by ccavalca          #+#    #+#             */
/*   Updated: 2025/05/04 13:58:46 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("ABCDEF"));
// 	printf("%d\n", ft_str_is_uppercase("abcd1234"));
// 	printf("%d\n", ft_str_is_uppercase("teste"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// 	return (0);
// }