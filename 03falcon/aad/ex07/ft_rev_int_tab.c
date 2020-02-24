/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:15:59 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/12 18:01:23 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int stock;

	size = size - 1;
	i = 0;
	while (i < size)
	{
		stock = tab[i];
		tab[i] = tab[size];
		tab[size] = stock;
		i++;
		size--;
	}
}
