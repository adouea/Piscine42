/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:55:00 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/20 19:28:57 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int len;

	i = -1;
	j = 0;
	len = 0;
	while (to_find[len])
		len++;
	if (len == 0)
		return (str);
	while (str[++i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j + 1 == len)
				return (&str[i]);
			j++;
		}
	}
	return (0);
}
