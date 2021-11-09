/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:21:58 by rburri            #+#    #+#             */
/*   Updated: 2021/11/09 09:13:10 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

char	*ft_itoa_base(size_t num, int base);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
char	*ft_strtolower(char *str);
int		ft_tolower(int c);
char	*ft_un_itoa(unsigned int n);
int		ft_istype(char c);
int		ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_print_c(char c);
int		ft_print_u(unsigned int num);
int		ft_print_s(char *str);
int		ft_print_p(unsigned int num);
int		ft_print_int(int num);
int		ft_print_cx(unsigned int num);
int		ft_print_x(unsigned int num);

#endif