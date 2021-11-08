/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:21:58 by rburri            #+#    #+#             */
/*   Updated: 2021/11/08 10:38:27 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

# include <unistd.h>
# include <stdarg.h>

int	ft_istype(char c);
int	ft_putchar(char c);
int	ft_print_c(va_list args);
int	ft_print_x(va_list args);
int	ft_print_u(va_list args);
int	ft_print_s(va_list args);
int	ft_print_p(va_list args);
int	ft_print_int(va_list args);
int	ft_print_cx(va_list args);

#endif