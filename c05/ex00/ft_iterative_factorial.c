/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:33:47 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/27 18:17:54 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resposta;

	resposta = 1;
	if (nb >= 0)
	{
		while (nb > 1)
		{
			resposta = resposta * nb;
			nb--;
		}
		return (resposta);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	envio;
	int	recebido;

	envio = 5;
	recebido = ft_iterative_factorial(envio);
	printf("Factorial de %d é: %d", envio, recebido);
}*/
