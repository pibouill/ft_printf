/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:38:20 by pibouill          #+#    #+#             */
/*   Updated: 2023/10/31 16:16:24 by pibouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cspdiuxX%

#include "libftprintf.h"

int	handle_format(char specifier, va_list arg)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += putchar_len(va_arg(arg, int));
	else if (specifier == 's')
		count += putstr_len(va_arg(arg, char *));
	else if (specifier == 'p')
		count += putptr_len(va_arg(arg, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += putnbr_len(va_arg(arg, int), 10);
	else if (specifier == 'u')
		count += putnbr_len(va_arg(arg, unsigned int), 10);
	else if (specifier == 'x')
		count += puthex_len(va_arg(arg, unsigned int), 0);
	else if (specifier == 'X')
		count += puthex_len(va_arg(arg, unsigned int), 1);
	else if (specifier == '%')
		count += write(1, "%%", 1);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	if (format == NULL)
		return (0);
	while (*format)
	{
		if (*format == '%')
			count += handle_format(*(++format), args);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(args);
	return (count);
}
