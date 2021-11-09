/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:34:11 by rburri            #+#    #+#             */
/*   Updated: 2021/11/09 09:07:17 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

int	ft_print_int(int num)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_itoa(num);
	count = ft_print_s(str);
	free(str);
	return (count);
}
