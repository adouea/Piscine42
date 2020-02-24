/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 11:13:39 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/16 23:03:39 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	char *str = argv[1];
	int tab_param[16];
	int tab [4][4];

	if (argc > 2)
	{
		ft_putstr("Error/n");
		return (0);
	}
	ft_param_error_len(str);
	ft_char_to_int(str, tab_param);
	ft_tabinit(tab);
	ft_placement(tab_param, tab);
	ft_display(tab);
	return (0);
}
