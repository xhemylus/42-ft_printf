/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollen <abollen@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:50:17 by abollen           #+#    #+#             */
/*   Updated: 2021/11/22 18:11:06 by abollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long nbr, char *base, int pf)
{
	unsigned long long	num;
	int					count;

	count = 0;
	if (pf == 0)
		count += write(1, "0x", 2);
	num = nbr;
	if (num >= 16)
		count += ft_putptr(num / 16, base, pf + 1);
	nbr = num % 16;
	write (1, &base[nbr], 1);
	return (count + 1);
}
