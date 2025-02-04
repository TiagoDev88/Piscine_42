/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:09:20 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/25 13:13:47 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
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
	char *resultado;

	printf("principal: %s\nfinal: %s\n",principal, final);
	resultado=ft_strcat(principal, final);
	printf("conjunto: %s\n",resultado);
}*/
