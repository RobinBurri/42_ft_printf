/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:06:44 by rburri            #+#    #+#             */
/*   Updated: 2021/11/08 10:33:56 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_handle_print(int type, va_list args)
{
	int i;

	i = 0;
	if (type == 'c')
		i = ft_print_c(va_arg(args, int));
	else if (type == 's')
		i = ft_print_s(va_arg(args, char*));
	else if (type == 'p')
		i = ft_print_p(va_arg(args, size_t));
	else if (type == 'd' || type == 'i')
		i = ft_print_int(va_arg(args, int));
	else if (type == 'u')
		i = ft_print_u(va_arg(args, unsigned int));
	else if (type == 'x')
		i = ft_print_x(va_arg(args, unsigned int));
	else if (type == 'X')
		i = ft_print_cx(va_arg(args, unsigned int));
	else if (type == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_handle_input(const char *str, va_list args)
{
	int type;
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
			count += ft_putchar(str[i]);
		else if (str[i] == '%' && str[i + 1])
		{
			i++;
			type = str[i];
			if (ft_istype(str[i]))
				count += ft_handle_print(type, args);
			else
				count += ft_putchar(str[i]);
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *input, ...)
{
	char	*str;
	va_list	args;
	int		count;

	count = 0;
	str = ft_strdup(input);
	if (!str)
		return (NULL);
	va_start(args, input);
	count += ft_handle_input(str, args);
	va_end(args);
	free(str);
	return (count);	
}
