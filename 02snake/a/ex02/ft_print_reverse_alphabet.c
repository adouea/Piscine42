/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:30:52 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/07 15:54:01 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int ahpla;

	ahpla = 'z';
	while (ahpla >= 'a')
	{
		write(1, &ahpla, 1);
		ahpla--;
	}
}
