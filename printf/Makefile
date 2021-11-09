# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rburri <rburri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 08:22:15 by rburri            #+#    #+#              #
#    Updated: 2021/11/09 09:42:53 by rburri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libftprintf.a

CC		= gcc -g -c ${CFLAGS}

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c  \
			helpers/ft_istype.c helpers/ft_itoa_base.c helpers/ft_itoa.c \
			helpers/ft_print_c.c helpers/ft_print_cx.c helpers/ft_print_int.c \
			helpers/ft_print_p.c helpers/ft_print_s.c helpers/ft_print_u.c \
			helpers/ft_print_x.c helpers/ft_putchar.c helpers/ft_strdup.c \
			helpers/ft_strtolower.c helpers/ft_tolower.c helpers/ft_un_itoa.c \
			helpers/ft_strlen.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

%.o: %.c
			$(CC) $< -o $@

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)


clean:
			/bin/rm -f $(OBJS)

fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean all


.PHONY:		all clean fclean re