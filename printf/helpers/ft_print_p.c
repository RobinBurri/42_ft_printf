/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:30:44 by rburri            #+#    #+#             */
/*   Updated: 2021/11/09 09:08:34 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

int	ft_print_p(unsigned int num)
{
	char	*hex;
	int		count;

	count = 0;
	hex = ft_itoa_base(num, 16);
	hex = ft_strtolower(hex);
	count += ft_print_s(hex);
	return (count);
}
