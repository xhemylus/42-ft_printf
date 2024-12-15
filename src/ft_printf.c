/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollen <abollen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:35:50 by abollen           #+#    #+#             */
/*   Updated: 2022/01/13 15:22:27 by abollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pcheck(char id, va_list args)
{
	if (id == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (id == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (id == 'p')
		return (ft_putptr(va_arg(args, unsigned long long), BASE, 0));
	else if (id == 'd' || id == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (id == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (id == 'x')
		return (ft_puthex(va_arg(args, unsigned int), BASE));
	else if (id == 'X')
		return (ft_puthex(va_arg(args, unsigned int), UPBASE));
	else
		return (write(1, &id, 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start (args, str);
	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count++;
		}
		else
			count += pcheck(str[++i], args);
	}
	return (count);
}
