/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:08:19 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/26 12:10:17 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_printf(const char *format, ...)
{
	t_attr		attr;
	va_list		argptr;
	int			i;

	attr.count = 0;
	va_start(argptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i = ft_parser(&attr, (char *)format, argptr);
			ft_printer(&attr, argptr);
			format += i;
		}
		else
			attr.count += ft_putchar(*format);
		format++;
	}
	va_end(argptr);
	return (attr.count);
}
