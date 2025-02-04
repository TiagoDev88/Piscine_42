/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:53:55 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:51:04 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
        printf("%d\n", ft_str_is_lowercase("42")); // retornar 0
        printf("%d\n", ft_str_is_lowercase("ola")); //retornar 1
        printf("%d\n", ft_str_is_lowercase("ola 42")); // retornar 0
        printf("%d\n", ft_str_is_lowercase("Ola!")); // retornar 0
        printf("%d\n", ft_str_is_lowercase("")); //retornar 1
}*/
