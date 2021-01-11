/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:08:19 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/11 10:08:35 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_printf(const char *format, ...)
{
	t_attr		struc_attr;
	va_list		argptr;
	int			count;
	int			i;

	count = 0;
	va_start(argptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i = ft_parser(&struc_attr, (char *)format, argptr);
			count += ft_printer(&struc_attr, &format, argptr);
			format = format + i;
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(argptr);
	return (count);
}
