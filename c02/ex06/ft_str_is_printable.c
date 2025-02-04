/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:54:49 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:52:36 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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
        printf("%d\n", ft_str_is_printable("42")); // retornar 1
        printf("%d\n", ft_str_is_printable("ÿ")); //retornar 0
        printf("%d\n", ft_str_is_printable("ola 42")); // retornar 1
        printf("%d\n", ft_str_is_printable("Ola!")); // retornar 1
        printf("%d\n", ft_str_is_printable("`")); //retornar 1
	printf("%d\n", ft_str_is_printable("")); //retornar 1
	printf("%d\n", ft_str_is_printable(" ")); //retornar 1
}*/
