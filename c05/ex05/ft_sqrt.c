/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:34:53 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/29 10:33:41 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	raizde;
	int	resultado;

	raizde = 36;
	resultado = ft_sqrt(raizde);
	printf("raiz de %d é %d\n", raizde, resultado);
}*/
