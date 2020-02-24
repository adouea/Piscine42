# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phaslan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/22 22:10:20 by phaslan           #+#    #+#              #
#    Updated: 2020/02/23 14:41:17 by phaslan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02
SRCS	=	main.c	ft_check.c	ft_others.c
OBJS	=	*.o
HEADER	=	header.h

GCC	=	gcc
FLAGS	= -Wall	-Wextra	-Werror
RM	= rm -f

${NAME}:	${SRCS}
				${GCC}	${FLAGS}	-o	${NAME} ${SRCS}	${HEADER}
				${GCC}	${FLAGS}

clean :
			${RM}	${OBJS}

fclean	:	
			clean 
			${RM}	${NAME}



