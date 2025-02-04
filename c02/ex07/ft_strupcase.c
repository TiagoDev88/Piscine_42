/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:55:12 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:53:01 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[8] = "oLa 42!";
	char	y[8] = "HelLo";
	ft_strupcase(x);
        printf("%s\n", x);
	ft_strupcase(y);
	printf("%s\n", y);
       // printf("%d\n", ft_strupcase("hello"));
	//printf("%d\n", ft_strupcase("hello forty-two"));
}*/
