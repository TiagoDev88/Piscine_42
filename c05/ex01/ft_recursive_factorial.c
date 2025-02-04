/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:18:01 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/27 18:05:20 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	resposta;

	if (nb <= 1)
		return (1);
	else
	{
		resposta = nb * ft_recursive_factorial(nb - 1);
		return (resposta);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	envio;
	int	resposta;

	envio = 5;
	resposta = ft_recursive_factorial(envio);
	printf("%d", resposta);
}*/
