/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putfcts_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:44:37 by pibouill          #+#    #+#             */
/*   Updated: 2023/10/31 16:14:11 by pibouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	putchar_len(int c)
{
	return (write(1, &c, 1));
}

int	putstr_len(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += putchar_len((int)*str);
		str++;
	}
	return (count);
}

int	putptr_len(void *ptr)
{
	unsigned long	ptr_value;
	int				count;

	count = 0;
	ptr_value = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += puthex_len(ptr_value, 0);
	return (count);
}

int	puthex_len(unsigned long hex, int is_uppercase)
{
	char	*symbols;
	int		count;

	count = 0;
	if (is_uppercase == 1)
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (hex >= 0 && hex < 16)
		return (putchar_len(symbols[hex]));
	else
	{
		count += puthex_len(hex / 16, is_uppercase);
		count += puthex_len(hex % 16, is_uppercase);
		return (count);
	}
}

int	putnbr_len(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (putnbr_len(-n, base) + 1);
	}
	else if (n < base)
		return (putchar_len(symbols[n]));
	else
	{
		count = putnbr_len(n / base, base);
		return (count + putnbr_len(n % base, base));
	}
}
