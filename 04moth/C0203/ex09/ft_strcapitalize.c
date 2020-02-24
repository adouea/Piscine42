/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadoue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:21:32 by aadoue            #+#    #+#             */
/*   Updated: 2020/02/14 15:05:23 by aadoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (((str[i - 1] < 48) || (str[i - 1] > 122) ||
		(str[i - 1] > 57 && str[i - 1] < 65) ||
		(str[i - 1] > 90 && str[i - 1] < 97)))
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
