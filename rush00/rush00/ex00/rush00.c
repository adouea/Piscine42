/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frchaban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 09:27:55 by frchaban          #+#    #+#             */
/*   Updated: 2020/02/08 18:01:12 by mlacheny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j++ < y)
	{
		i = 0;
		while (i++ < x)
		{
			if (x == 1 && y == 1)
				ft_putchar('o');
			if (((i == 1 && j == 1) || (i == x && j == y)) && y > 1)
				ft_putchar('o');
			if (((i == 1 && j == y) || (i == x && j == 1)) && x > 1)
				ft_putchar('o');
			if ((i > 1 && i != x) && (j == 1 || j == y))
				ft_putchar('-');
			if (((j < y && j > 1)) && (i == 1 || i == x))
				ft_putchar('|');
			if (((j < y && j > 1)) && (i > 1 && i < x))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
