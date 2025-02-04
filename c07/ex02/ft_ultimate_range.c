/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:21:06 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/02 13:42:20 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = malloc((max - min) * sizeof(*p));
	if (!p)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*array;
	int	min = 1;
	int	max = 10;
	int res;

	printf("Ponteiro do array antes: %p\n", array);
	res=ft_ultimate_range(&array,min,max);
	printf("Min:%d\nMax;%d\nDevolvido:%d\nEndereco:%p",min, max, res, array);
}*/
