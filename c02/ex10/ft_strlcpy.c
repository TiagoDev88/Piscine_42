/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:54:01 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 13:33:21 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[50] = "Hello School";
	char	s2[50];
	int	siz;
	int	res;

	siz = 3;

	res = ft_strlcpy(s2, s1, siz);
	printf("%s\n", s2);
	printf("%d", res);
}*/
