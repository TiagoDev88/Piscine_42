/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:20:02 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/27 19:46:59 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resposta;

	resposta = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			resposta = resposta * nb ;
			power--;
		}
		return (resposta);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	number;
	int	potencia;
	int	res;

	number = 12;
	potencia = 1;
	res=ft_iterative_power(number, potencia);
	printf("Numero %d com potencia %d.\n resultado: %d",number, potencia, res);
}*/
