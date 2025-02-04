/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:23:24 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/20 15:45:32 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	temporaria;

	x = 0;
	while (x < size / 2)
	{
		temporaria = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = temporaria;
		x++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tamanho;
	int	array[] = {2, 3, 4, 7};

	tamanho = 4;
	printf("Antes %d,%d,%d,%d\n", array[0],array[1],array[2],array[3]);
	ft_rev_int_tab(array, tamanho);
	printf("Depois %d,%d,%d,%d\n", array[0],array[1],array[2],array[3]);
}*/
