/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:44:55 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/26 12:39:52 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char		ft_get_addition_char(t_attr *attr, int len)
{
	if (attr->precision < 0 || attr->precision > len)
		attr->precision = len;
	if (attr->minus == 1 || (!attr->minus && !attr->zero))
		return (' ');
	else if (attr->zero == 1)
		return ('0');
	else
		return (' ');
}

int				ft_print_s(t_attr *attr, va_list argptr)
{
	char		*str;
	int			len;
	char		addition_char;
	int			addition_len;
	int			count;

	count = 0;
	addition_len = 0;
	str = ft_get_next_argument_char(argptr);
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	addition_char = ft_get_addition_char(attr, len);
	if (attr->width > attr->precision)
		addition_len = len < attr->precision ? attr->width - len :
					   attr->width - attr->precision;
	if (attr->minus == 0)
		ft_print_chars(addition_char, addition_len, attr);
	while (attr->precision > 0)
	{
		attr->count += ft_putchar(*(str)++);
		attr->precision--;
	}
	if (attr->minus == 1)
		ft_print_chars(addition_char, addition_len, attr);
	return (count);
}
