/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollen <abollen@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:50:17 by abollen           #+#    #+#             */
/*   Updated: 2021/11/22 18:30:23 by abollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	unsigned long	num;
	int				count;

	count = 0;
	num = nbr;
	if (num >= 10)
		count += ft_putunsigned(num / 10);
	nbr = num % 10 + '0';
	write (1, &nbr, 1);
	return (count + 1);
}
