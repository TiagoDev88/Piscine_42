/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:36:49 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 09:51:20 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*temp;
	unsigned int	i;

	temp = dest;
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (temp);
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned int limit;
	char s1[] = "Hello 42!";
	char s2[100];
	char	*res;

	limit = 2;

	res = ft_strncpy(s2, s1, limit);
	printf("%s", res);
}*/
