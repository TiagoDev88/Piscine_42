/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:32:54 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/20 11:25:40 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		x++;
		str++;
	}
	return (x);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s;

	s = "Vai printar 14";
	printf("%d", ft_strlen(s));
}*/
