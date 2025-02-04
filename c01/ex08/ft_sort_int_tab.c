/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:48:10 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/20 19:19:34 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	x;
	int	temporario;

	j = 0;
	while (j < size - 1)
	{
		x = 0;
		while (x < size - 1 - j)
		{
			if (tab[x] > tab[x + 1])
			{
				temporario = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = temporario;
			}
			x++;
		}
		j++;
	}
}
/*
#include <stdio.h>

int     main(void)
{
    int n[5] = {8, 7, 4, 10, 1};
    int contar = 5;
    printf("Array enviado %d,%d,%d,%d,%d\n", n[0], n[1], n[2], n[3], n[4]);
    ft_sort_int_tab(n, contar);
    printf("Array ordenado %d,%d,%d,%d,%d\n", n[0], n[1], n[2], n[3], n[4]);
}*/
