/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:03:52 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/19 19:37:31 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>
int     main(void)
{
        int     x;
        int     y;
        int     d;
        int     m;

        x = 73;
        y = 5;
        d = 0;
        m = 0;
        printf("%d %d\n", x, y);
        ft_div_mod(x, y, &d, &m);
        printf("%d %d\n", d, m);
}*/
