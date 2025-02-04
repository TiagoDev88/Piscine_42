/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:16:48 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/29 16:27:05 by tfilipe-         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	nb++;
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int numero;
	int primo;

	numero = 14;
	primo = ft_find_next_prime(numero);
	printf("Numero enviado: %d\nNumero retornado primo: %d", numero, primo);
}*/
