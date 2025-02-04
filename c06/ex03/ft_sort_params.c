/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:19:53 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/01/30 10:07:25 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

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

char	sort_value(char **argv, int size)
{
	int		a;
	int		b;
	char	*temporario;

	a = 1;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				temporario = argv[a];
				argv[a] = argv[b];
				argv[b] = temporario;
			}
			b++;
		}
		a++;
	}
	return (**argv);
}

int	main(int argc, char **argv)
{
	int	size_argv;
	int	i;

	size_argv = argc;
	if (argc > 0)
		sort_value(argv, size_argv);
	i = 1;
	while (argc > i)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
