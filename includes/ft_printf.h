/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollen <abollen@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:00:27 by abollen           #+#    #+#             */
/*   Updated: 2021/11/22 18:35:16 by abollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE "0123456789abcdef"
# define UPBASE "0123456789ABCDEF"
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_puthex(unsigned int nbr, char *base);
int	ft_putptr(unsigned long long nbr, char *base, int pf);
int	ft_putnbr(int nbr);
int	ft_printf(const char *str, ...);
int	ft_putunsigned(unsigned int nbr);

#endif