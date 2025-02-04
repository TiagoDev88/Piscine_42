/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:29:30 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/30 18:00:48 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		x;
	unsigned int		y;
	unsigned int		z;

	x = 0;
	while (dest[x] && x < size)
		x++;
	y = 0;
	while (src[y])
		y++;
	if (size <= x)
		return (size + y);
	z = 0;
	while (src[z] && (x + z) < (size - 1))
	{
		dest[x + z] = src[z];
		z++;
	}
	dest[x + z] = '\0';
	return (x + y);
}

#include <stdio.h>
#include <bsd/string.h>


int main()
{
    char first[] = "Vai ser uma ";
    char last[] = "string longa";
    int r;
    int size = 10;

    r = strlcat(first,last,size);

    puts(first);
    printf("Valor de retorno: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String foi copiada");

    return(0);
}
