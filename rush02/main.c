/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:51:15 by gpatingr          #+#    #+#             */
/*   Updated: 2020/02/23 17:34:00 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	**dico_init(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	char	*dico = (char *)malloc(14 * 110 * sizeof(char));
	while (i <= 110)
	{
		while (j <= 14)
		{
			dico[i] = '0';
			j++;
		}
		i++;
	}
	return (*dico);
}

char	**parsing(char **)

int		main(int argc, char **argv)
{
	if (argc >= 2 && argc <= 3)
	{
		if (check_arg(argv[1]) == 1)
			ft_str_to_tabint(ft_boolean_check(argv[1]), argv[1]);
		else if (check_arg(argv[1]) == 0)
		{
			ft_putstr("error\n");
			return (0);
		}
	}
	if (argc > 3)
	{
		ft_putstr("error\n");
		return (0);
	}
	int		i;

	i = 0;
	while (i < ft_strlen(argv[1]))
	{
		ft_putstr();
		i++;
	}
}
