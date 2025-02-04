/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:52:46 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:50:21 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		else
			str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("42")); // retornar 0
	printf("%d\n", ft_str_is_alpha("ola")); //retornar 1
	printf("%d\n", ft_str_is_alpha("ola 42")); // retornar 0
	printf("%d\n", ft_str_is_alpha("Ola!")); // retornar 0
	printf("%d\n", ft_str_is_alpha("")); //retornar 1
}*/
