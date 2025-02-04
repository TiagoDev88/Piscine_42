/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:16:27 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/28 12:42:54 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	resposta;

	resposta = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (resposta);
	else
	{
		resposta = nb * ft_recursive_power(nb, power - 1);
		return (resposta);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	potencia;
	int	envio;
	int	solucao;

	potencia = 3;
	envio = 5;
	solucao=ft_recursive_power(envio, potencia);
	printf("Numero %d com potencia de %d é %d", envio, potencia, solucao);
}*/
