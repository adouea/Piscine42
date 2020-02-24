/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:48:59 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/09 16:01:23 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	zero(int x, int y, int i, int j)
{
	if (j == y - 1)
	{
		if (i == 0)
			ft_putchar('A');
		else
		{
			if (i == x - 1)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
	}
	else
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	one(int x, int y, int i, int j)
{
	if (j == 0)
	{
		if (i == 0)
			ft_putchar('A');
		else
		{
			if (i == x - 1)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
	}
	else
	{
		zero(x, y, i, j);
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			one(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		main(void)
{
	rush(1, 1);
}
