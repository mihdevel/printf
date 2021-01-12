/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:03:06 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/12 20:03:06 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char		ft_get_addition_char(t_attr *attr, int len)
{
	if (attr->precision == -1 || attr->precision > len)
		attr->precision = len;
	if (attr->minus == 1 || (!attr->minus && !attr->zero))
		return (' ');
	else if (attr->zero == 1)
		return ('0');
	else
		return (' ');
}

static int		ft_get_addition_len(t_attr *attr, int len)
{
	if (len < attr->precision)
		return (attr->width - len);
	else
		return (attr->width - attr->precision);
}

static int		ft_print_spaces_or_nulls(char c, int len)
{
	int		count;

	count = len;
	while (len-- > 0)
		ft_putchar(c);
	return (count);
}

int				ft_print_d(t_attr *attr, va_list argptr)
{
	int			nbr;
	int			len;
	char		addition_char;
	int			addition_len;
	int			count;

	count = 0;
	addition_len = 0;
	nbr = ft_get_next_argument_int(argptr);
	len = ft_strlen(ft_itoa(nbr));
	addition_char = ft_get_addition_char(attr, len);
	if (attr->width > attr->precision)
		addition_len = len < attr->precision ? attr->width - len :
					   attr->width - attr->precision;
	if (attr->minus == 0)
		count += ft_print_spaces_or_nulls(addition_char, addition_len);
	while (attr->precision > 0)
	{
		ft_putnbr_fd(nbr, 1);
		count += len;
		attr->precision--;
	}
	if (attr->minus == 1)
		count += ft_print_spaces_or_nulls(addition_char, addition_len);
	return (count);
}
