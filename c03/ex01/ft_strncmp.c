/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:48:42 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/24 13:07:41 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && (*s1 || *s2))
	{
		if (!(*s1 == *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
		x++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[] = "";
	char	test1[] = "";
	int	limite;
	int	resultado;

	limite = 3;

	resultado = ft_strncmp(test, test1, limite);
	printf("resultado %d\n", resultado);
}*/
