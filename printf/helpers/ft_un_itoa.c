/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_un_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:44:26 by rburri            #+#    #+#             */
/*   Updated: 2021/11/09 08:35:21 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

static unsigned int	ft_nbdigits(unsigned int nb)
{
	unsigned int	unsigned_nb;
	unsigned int	res;

	unsigned_nb = nb;
	res = 1;
	while (unsigned_nb >= 10)
	{
		res++;
		unsigned_nb /= 10;
	}
	return (res);
}

static int	ft_cnt_len(unsigned int n)
{
	unsigned int	len;

	len = ft_nbdigits(n);
	return (len);
}

char	*ft_un_itoa(unsigned int n)
{
	char	*res;
	int		len;
	long	nbr;

	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	len = ft_cnt_len(n);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	res[len--] = '\0';
	while (nbr > 0)
	{
		res[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (len == 0 && res[1] == '\0')
		*(res + len) = '0';
	else if (len == 0 && res[1] != '\0')
		*(res + len) = '-';
	return (res);
}
