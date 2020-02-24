/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:51:16 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/21 12:14:25 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = a * -1;
	}
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar((a % 10) + 48);
}

int	ft_atoi(char *str)
{
	int i;
	int result;
	int minus;

	i = 0;
	result = 0;
	minus = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * minus);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_putnbr(ft_atoi(argv[1]));
	return (0);
}
