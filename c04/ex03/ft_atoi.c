/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:02:46 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/27 10:39:22 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	result;

	i = 0;
	sinal = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = -sinal;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sinal);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int	string;

	if (argc !=2)
	{
		write(1, "Error\n", 6);
		return(1);
	}
	else
		string = ft_atoi(argv[1]);
	printf("%d", string);
	return (0);
}*/
