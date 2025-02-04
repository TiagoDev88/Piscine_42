/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:35:18 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/29 16:12:09 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;
	int	i;

	i = 1;
	divisor = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if ((nb % i) == 0)
			divisor++;
		i++;
	}
	if (divisor == 2)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	numero;
	int	retorno;

	numero = 13;
	retorno = ft_is_prime(numero);
	printf("%d\n", retorno);
	if (retorno == 1)
		printf("Numero %d é primo", numero); 
	else 
		printf("Numero %d nao é primo", numero);
}*/
