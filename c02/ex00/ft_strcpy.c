/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:24:23 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 09:36:22 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;
	int		i;

	temp = dest;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[10] = "Hello 42!";
	char	s2[10];

	ft_strcpy(s2, s1);

	printf ("%s", s2);
}*/
