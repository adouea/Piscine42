/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_inttab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:24:10 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/23 20:30:27 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_to_tabint(int odd, char *str)
{
	int len;
	int i;
	int j;
	int tmp;
	int *tab_res;

	len = 0;
	i = 0;
	j = 0;
	tmp = 0;
	while (str[len])
		len++;
	if(!(tab_res = malloc(sizeof(int) * 60)))
		return (0);
	if (odd == 0)
	{
		if (len == 2)
		{
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
		}
		if (len == 4)
		{
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 101;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
		}
		if (len == 6)
		{
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 101;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
		}
		if (len == 8)
		{
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 102;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 101;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
		}
		if (len == 10)
		{
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 103;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 102;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 101;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
	}
	else
	{
		if (len == 1)
		{
			tab_res[j] = str[i] - 48;
			i++;
		}
		if (len == 3)
		{
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			if (tmp != 0)
				tab_res[j] = tmp;
		}
		if (len == 5)
		{
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 101;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
		}
		if (len == 7)
		{
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 102;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 101;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
		}
		if (len == 9)
		{
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 102;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
			i++;
			j++;
			tab_res[j] = 101;
			j++;
			tab_res[j] = str[i] - 48;
			i++;
			j++;
			tab_res[j] = 100;
			j++;
			tmp = (str[i] - 48) * 10;
			i++;
			tmp = tmp + (str[i] - 48);
			tab_res[j] = tmp;
		}
	}
	return *tab_res;
}
