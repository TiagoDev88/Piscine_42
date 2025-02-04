/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:55:40 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:53:20 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (temp);
}
/*
#include <stdio.h>

int     main(void)
{
        char    x[8] = "OLa 42!";
        char    y[8] = "HelLo";
        ft_strlowcase(x);
        printf("%s\n", x);
        ft_strlowcase(y);
        printf("%s\n", y);
}*/
