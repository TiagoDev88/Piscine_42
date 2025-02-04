/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:10:09 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/26 13:40:43 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	x;

	x = 0;
	while (s1[x] || s2[x])
	{
		if (!(s1[x] == s2[x]))
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	t1[10] = "Ola";
	char	t2[10] = "OlA";
	int	result;

	result = ft_strcmp(t1, t2);
	
	printf("%d \n", result);
}*/
