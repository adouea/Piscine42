/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:27:59 by phaslan           #+#    #+#             */
/*   Updated: 2020/02/23 17:38:35 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define ERROR "Error\n"
# include <unistd.h>
# include <stdlib.h>


int ft_strlen(char *str);
void ft_putstr(char *str);
int is_zero(char *str);
int check_arg(char *str);
int ft_boolean_check(char *str);

#endif
