/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:52:47 by pibouill          #+#    #+#             */
/*   Updated: 2023/11/01 15:05:57 by pibouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	putchar_len(int c);
int	putstr_len(char *str);
int	putptr_len(void *ptr);
int	put_nbr_u_hex_len(long n, int base, int is_uppercase);

#endif
