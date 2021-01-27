/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_с.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:31:41 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/26 12:39:52 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char		ft_get_addition_char(t_attr *attr)
{
	if (attr->minus == 1 || (!attr->minus && !attr->zero))
		return (' ');
	else if (attr->zero == 1)
		return ('0');
	else
		return (' ');
}

int				ft_print_c(t_attr *attr, va_list argptr)
{
	int			c;
	char		addition_char;
	int			addition_len;

	addition_len = 0;
	c = va_arg(argptr, int);
	addition_char = ft_get_addition_char(attr);
	if (attr->width > 1)
		addition_len = attr->width - 1;
	if (attr->minus == 0)
		ft_print_chars(addition_char, addition_len, attr);
	attr->count += ft_putchar(c);
	if (attr->minus == 1)
		ft_print_chars(addition_char, addition_len, attr);
	return (0);
}
