/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:08:19 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 20:10:34 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_printf(const char *format, ...)
{
	t_attr		attr;
	va_list		argptr;

	attr.count = 0;
	va_start(argptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			format += ft_parser(&attr, (char *)format, argptr);
			if (ft_printer(&attr, argptr) == -1)
				return (-1);
		}
		else
			attr.count += ft_putchar(*format);
		format++;
	}
	va_end(argptr);
	return (attr.count);
}
