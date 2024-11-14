/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajadid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:12:50 by hajadid           #+#    #+#             */
/*   Updated: 2024/11/14 10:12:52 by hajadid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *len)
{
	if (!str)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, len);
		str++;
	}
}
