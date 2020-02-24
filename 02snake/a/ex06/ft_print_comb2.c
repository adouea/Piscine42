/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:21:49 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/10 18:53:06 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_putchar(nbr1 / 10 + '0');
			ft_putchar(nbr1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(nbr2 / 10 + '0');
			ft_putchar(nbr2 % 10 + '0');
			if (nbr1 == 98)
			{
			}
			else
			{
				write(1, ", ", 2);
			}
			nbr2++;
		}
		nbr1++;
	}
}
