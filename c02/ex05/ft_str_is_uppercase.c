/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:54:19 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:51:57 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
        printf("%d\n", ft_str_is_uppercase("42")); // retornar 0
        printf("%d\n", ft_str_is_uppercase("OLA")); //retornar 1
        printf("%d\n", ft_str_is_uppercase("ola 42")); // retornar 0
        printf("%d\n", ft_str_is_uppercase("Ola!")); // retornar 0
        printf("%d\n", ft_str_is_uppercase("")); //retornar 1
}*/
