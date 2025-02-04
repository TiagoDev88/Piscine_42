/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:59:21 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/25 18:07:51 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char envio[]="ola 42!";
	int	contador;

	contador=ft_strlen(envio);
	printf("Tem %d caracteres na string", contador);
}*/
