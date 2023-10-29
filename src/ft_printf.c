/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:38:20 by pibouill          #+#    #+#             */
/*   Updated: 2023/10/29 16:59:49 by pibouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		return_len;

	va_start(ap, format);


	va_end(ap);
	return (return_len);
}

int	main()
{
	ft_printf("this is a number: %d", 42);
	printf("this is a number: %d", 42);
}
