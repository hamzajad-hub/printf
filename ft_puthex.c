/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajadid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:11:18 by hajadid           #+#    #+#             */
/*   Updated: 2024/11/14 10:11:21 by hajadid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char *hex, int *len)
{
	if (nbr > 15)
		ft_puthex(nbr / 16, hex, len);
	ft_putchar(hex[nbr % 16], len);
}
