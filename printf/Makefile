# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rburri <rburri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 08:22:15 by rburri            #+#    #+#              #
#    Updated: 2021/11/05 08:28:05 by rburri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a

SRCS	= ft_printf.c 

OBJS	= $(SRCS:.c=.o)

%.o %.c
			$(CC) -c $(CFLAGS) $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)


clean:
			/bin/rm -f $(OBJS)

fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean all


.PHONY:		all clean fclean re