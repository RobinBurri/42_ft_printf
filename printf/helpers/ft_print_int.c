/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:34:11 by rburri            #+#    #+#             */
/*   Updated: 2021/11/08 11:39:09 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int num)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(num);
	i = ft_print_s(str);
	free(str);
	return (i);
}
