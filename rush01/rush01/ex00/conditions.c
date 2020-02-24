/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:43:43 by wluong            #+#    #+#             */
/*   Updated: 2020/02/16 22:47:09 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	message_erreur(void)
{
	write(1, "ERROR", 5);
}

void	erreur(int *tab)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while ( i != 17 && j != 18)
	{
		if (tab[i] == 4 && tab[j] != 1)
		{
			message_erreur();
			break ;
		}
		if ((tab[i] == 3 && tab[j] != 1) || (tab[i] ==3 && tab[j] != 2))
		{
			message_erreur();
			break ;
		}
		if ((tab[i] == 2 && tab[j] != 2) || (tab[i] == 2 && tab[j] != 3) || (tab[i] == 2 && tab[j] != 1))
		{
			message_erreur();
			break ;
		}
		if ((tab[i] == 1 && tab[j] != 4) || (tab[i] == 1 && tab[j] != 3) || (tab[i] == 1 && tab[j] != 2))
		{
			message_erreur();
			break ;
		}
		i = i + 2;
		j = j + 2;
	}
}
		
