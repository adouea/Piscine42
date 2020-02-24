/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:21:50 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/16 22:53:07 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int tab[4][4])
{
	int x;
	int y;

	y = 0;
	while(y < 5)
	{
		x = 0;
		while (x < 5)
		{
			ft_putchar(tab[y][x] + 48);
			if (x < 4)
				ft_putchar(' ');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}