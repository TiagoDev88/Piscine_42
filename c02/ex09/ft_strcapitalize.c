/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:56:15 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 12:48:12 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_alpha(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && !ft_alpha(str[i -1]))
			str[i] = str[i] -32;
		if (str[i] >= 'A' && str[i] <= 'Z' && ft_alpha(str[i -1]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char *res;

	char string[60] = "ola, tudo bem?42palavrasquarenta-e-duas;cinquenta+e+um";

	res = ft_strcapitalize(string);
	printf("%s",res);
}*/
