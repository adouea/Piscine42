/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinaisons_particulieres.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 11:15:44 by wluong            #+#    #+#             */
/*   Updated: 2020/02/16 21:49:00 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		combinaisons_particulieres_row(int rowleft, int rowright)
{
	int tab[4];

	if (rowleft == 4 && rowright == 1)
		tab[4] = {1, 2, 3, 4};
	else if (rowleft == 1 && rowright == 4)
		tab[4] = {4, 3, 2, 1};
	else if (rowleft == 1 && rowright == 2)
		tab[4] = {4, 1, 2, 3};
	else
		tab[4] = {0,0,0,0};
	return (tab);
}
