/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:17:45 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/28 18:32:50 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	valor;

	valor = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index > 2)
		valor = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (valor);
}
/*
#include <stdio.h>
int	main(void)
{
	int	number;
	int	resultado;

	number = 9;
	resultado = ft_fibonacci(number);
	printf("Numero enviado %d\nnumero retornado %d",number, resultado);
}*/
