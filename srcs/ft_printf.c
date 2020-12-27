/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:08:19 by meunostu          #+#    #+#             */
/*   Updated: 2020/12/27 13:08:21 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_printf(const char *format, ...)
{
	t_attr		attr;
	va_list		argptr;
	int			count;

	count = 0;
	va_start(argptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			*format++;
			ft_parser(&attr, &format, argptr);
			count += ft_printer(&attr, &format, argptr);
		}
		else
		{
			write(1, &format, 1);
			count++;
		}
		format++;
	}
	va_end(argptr);
	return (count);
}
