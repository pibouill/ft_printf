/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putfcts_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:44:37 by pibouill          #+#    #+#             */
/*   Updated: 2023/10/29 19:55:48 by pibouill         ###   ########.fr       */
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

int	puthex_len(int x)
{

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
