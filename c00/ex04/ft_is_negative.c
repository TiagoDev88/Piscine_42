/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:28:49 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/02/03 15:30:08 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;
	char	y;

	x = 'N';
	y = 'P';
	if (n < 0)
	{
		write(1, &x, 1);
	}
	else
	{
		write(1, &y, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(10);
}*/
