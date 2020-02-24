/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplissage_lignes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 21:38:33 by wluong            #+#    #+#             */
/*   Updated: 2020/02/16 22:51:37 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*combi_13(void);
int		*combi_21(void);
int		*combi_22(void);
int		*combi_23(void);
int		*combi_31(void);
int		*combi_32(void);
int		combinaisons_particulieres_row(int rowleft, int rowright);



int		*tableau_final(int *tab)
{
	int tableau_final[4][4];
	int i;
	int j;
	int k;

	i = 0;
	j = 8;
	k = 12;
	while (i < 4)
	{
		tab[i] = combinaisons_particulieres_row;
		if (tab[j] == 1 && tab[k] == 3)
			tableau_final[i] = combi_13()[0];
		if (tab[j] == 2 && tab[k] == 1)
			tableau_final[i] = combi_21()[0];
		if (tab[j] == 2 && tab[k] == 2)
			tableau_final[i] = combi_22()[0];
		if (tab[j] == 2 && tab[k] == 3)
			tableau_final[i] = combi_13()[0];
		if (tab[j] == 3 && tab[k] == 1)
			tableau_final[i] = combi_31()[0];
		if (tab[j] == 3 && tab[k] == 2)
			tableau_final[i] = combi_32()[0];
		i++;
		j++;
		k++;
	}
	return (tableau_final);
}
