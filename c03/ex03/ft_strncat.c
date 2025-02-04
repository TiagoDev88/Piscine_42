/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:09 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/25 13:20:08 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	char			*temp;

	x = 0;
	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (x < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}
	*dest = '\0';
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char principal[] = "Ola amigo ";
	char final[] = "da 42!";
	unsigned int limite = 4;
	char *resultado;

	printf("principal: %s\nfinal: %s\n",principal, final);
	resultado=ft_strncat(principal, final, limite);
	printf("conjunto: %s\n", resultado);
}*/
