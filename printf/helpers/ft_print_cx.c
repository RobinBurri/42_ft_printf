/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:33:24 by rburri            #+#    #+#             */
/*   Updated: 2021/11/09 10:23:05 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

int	ft_print_cx(unsigned int num)
{
	char	*hex;
	int		count;

	count = 0;
	hex = ft_itoa_base(num, 16);
	count += ft_print_s(hex);
	free(hex);
	return (count);
}
