/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 07:38:39 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 08:02:09 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_length(char **strs, int size, char *sep)
{
	int	i;
	int	length;

	length = 0;
	if (size == 0)
		return (1);
	i = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + (size - 1) * ft_strlen(sep);
	length = length + 1;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size == 0)
	{
		result = malloc(sizeof(*result));
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc(sizeof(*result) * ft_total_length(strs, size, sep));
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*words[] = {"hello", "school", "42"};
	char	*sep;
	char	*res;

	sep = "-";

	res = ft_strjoin(3, words, sep);
	printf("%s", res);
	free(res);
}*/
