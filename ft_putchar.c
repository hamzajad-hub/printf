/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajadid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:12:02 by hajadid           #+#    #+#             */
/*   Updated: 2024/11/14 10:12:05 by hajadid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *len)
{
	int	temp;

	if (*len == -1)
		return ;
	temp = write(1, &c, 1);
	if (temp == -1)
	{
		*len = -1;
		return ;
	}
	*len += temp;
}