/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combi_32.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 11:27:37 by wluong            #+#    #+#             */
/*   Updated: 2020/02/16 23:07:52 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*combi_32(void)
{
	int list_comb[3][4];

	list_comb[0] = {1, 2, 4, 3};
	list_comb[1] = {1, 3, 4, 2};
	list_comb[2] = {2, 3, 4, 1};

	return (*list_comb);
}
