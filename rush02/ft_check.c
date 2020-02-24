/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:46:01 by phaslan           #+#    #+#             */
/*   Updated: 2020/02/23 17:26:34 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_arg(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	i = 0;
	while (str[i] == '0')
		i++;
	while (str[i])
	{
		i++;
		count++;
	}
	if (count > 39)
		return (0);
return (1);
}

int	ft_boolean_check(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if ((i % 2) == 0)
		return (0);
	else
		return (1);
}
