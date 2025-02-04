/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:30:12 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/01 18:22:04 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*point;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	point = malloc((max - min) * sizeof(*point));
	if (!point)
		return (NULL);
	while (min < max)
	{
		point[i] = min;
		min++;
		i++;
	}
	return (point);
}
/*
#include <stdio.h>

int	main(void)
{
	int	max = 10;
	int	min = 0;

	printf ("Pointer:%p\n", ft_range(min,max));
}*/
