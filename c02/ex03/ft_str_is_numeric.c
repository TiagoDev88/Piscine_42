/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:53:26 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:50:46 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
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

int     main(void)
{
        printf("%d\n", ft_str_is_numeric("42")); // retornar 1
        printf("%d\n", ft_str_is_numeric("ola")); //retornar 0
        printf("%d\n", ft_str_is_numeric("ola 42")); // retornar 0
        printf("%d\n", ft_str_is_numeric("Ola!")); // retornar 0
        printf("%d\n", ft_str_is_numeric("")); //retornar 1
}*/
