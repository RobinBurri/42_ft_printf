/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:32:07 by rburri            #+#    #+#             */
/*   Updated: 2021/11/08 11:50:07 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int num)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_un_itoa(num);
	i = ft_print_s(str);
	free(str);
	return (i);
}
