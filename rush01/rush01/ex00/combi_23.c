/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combi_23.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:35:25 by wluong            #+#    #+#             */
/*   Updated: 2020/02/16 23:07:19 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*combi_23(void)
{
	int list_comb[3][4];

	list_comb[0] = {1, 4, 3, 2};
	list_comb[1] = {2, 4, 3, 1};
	list_comb[2] = {3, 4, 2, 1};

	return (*list_comb);
}
