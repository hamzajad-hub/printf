/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajadid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:11:38 by hajadid           #+#    #+#             */
/*   Updated: 2024/11/14 10:11:47 by hajadid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	tchek(va_list ap, char format, int *len)
{
	if (format == '%')
		ft_putchar('%', len);
	else if (format == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (format == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int), len);
	else if (format == 'u')
		ft_putuni(va_arg(ap, unsigned int), len);
	else if (format == 'x')
		ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef", len);
	else if (format == 'X')
		ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF", len);
	else if (format == 'p')
	{
		ft_putstr("0x", len);
		ft_putptr(va_arg(ap, unsigned long), len);
	}
	else
		ft_putchar(format, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	if (!format)
		return (0);
	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if ((format[i] == '%') && (format[i + 1] == '\0'))
			return (len);
		if (format[i] == '%')
			tchek(ap, format[i++ + 1], &len);
		else
			ft_putchar(format[i], &len);
		if (len == -1)
			return (-1);
		i++;
	}
	return (len);
}
