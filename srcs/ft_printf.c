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

void			init_struct(t_attr *attr)
{
	attr->noll = 0;
	attr->minus = 0;
	attr->width = 0;
	attr->precision = 0;
}

int				ft_printf(const char *format, ...)
{
	t_attr		struc_attr;
	va_list		argptr;
	int			count;
	int 		i;

	count = 0;
	va_start(argptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			init_struct(&struc_attr);
			if((i = ft_parser(&struc_attr, format, argptr)) == -1)
				return (-1);
			count += ft_printer(&struc_attr, &format, argptr);
			format = format + i;
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(argptr);
	return (count);
}
