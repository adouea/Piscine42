/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combi_21.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:36:25 by wluong            #+#    #+#             */
/*   Updated: 2020/02/16 23:06:22 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*combi_21(void)
{
	int list_comb[3][4];

	list_comb[0] = {2, 3, 1, 4};
	list_comb[1] = {3, 1, 2, 4};
	list_comb[2] = {3, 2, 1, 4};

	return (*list_comb);
}
