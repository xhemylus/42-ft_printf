/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollen <abollen@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:50:17 by abollen           #+#    #+#             */
/*   Updated: 2021/11/22 18:35:02 by abollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, char *base)
{
	unsigned int	num;
	int				count;

	count = 0;
	num = nbr;
	if (num >= 16)
		count += ft_puthex(num / 16, base);
	nbr = num % 16;
	write (1, &base[nbr], 1);
	return (count + 1);
}
