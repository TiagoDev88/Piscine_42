/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:40:17 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/19 19:49:49 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	div = *a / *b;
	resto = *a % *b;
	*a = div;
	*b = resto;
}
/*
#include<stdio.h>
int     main(void)
{
        int     x;
        int     y;


        x = 100;
        y = 5;

        printf("%d %d\n", x, y);
        ft_ultimate_div_mod(&x, &y);
        printf("%d %d\n", x, y);
}*/
