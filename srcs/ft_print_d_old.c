/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:03:06 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/21 14:59:22 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//static char		ft_get_addition_char(t_attr *attr)
//{
//	if (attr->minus == 1 || (!attr->minus && !attr->zero))
//		return (' ');
//	else if (attr->zero == 1 && attr->precision)
//		return ('0');
//	else
//		return (' ');
//}

//static int		ft_get_addition_len(t_attr *attr, int len)
//{
//	if (len < attr->precision)
//		return (attr->width - len);
//	else
//		return (attr->width - attr->precision);
//}

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
	int 		zerro_len;
	int			flag;

	count = 0;
	addition_len = 0;
	zerro_len = 0;
	addition_char = ' ';
	nbr = ft_get_next_argument_int(argptr);
	len = ft_strlen(ft_itoa(nbr));
	if (nbr < 0)
		len -= 1;
	if (attr->width > attr->precision)
		addition_len = len < attr->precision ? attr->width - len :
					   attr->width - attr->precision;
	flag = addition_len;
	if (attr->precision > len)
		zerro_len = attr->precision - len;
	if (nbr < 0)
	{
		count += ft_print_spaces_or_nulls('-', 1);
		addition_len -= 1;
		flag -= 1;
		nbr *= -1;
	}
//	if (attr->precision > len)
//	{
//		count += ft_print_spaces_or_nulls('0', zerro_len);
//		addition_len = (addition_len - (attr->precision - len));
//	}

	if (attr->zero && attr->width > len + zerro_len)
		addition_char = '0';
	if (attr->minus == 0)
		count += ft_print_spaces_or_nulls(addition_char, addition_len);
	if (attr->precision > len && flag == addition_len)
		count += ft_print_spaces_or_nulls('0', zerro_len);
	ft_putnbr_fd(nbr, 1);
	count += len;
	if (attr->minus == 1)
		count += ft_print_spaces_or_nulls(' ', addition_len);
//	ft_print_spaces_or_nulls(addition_char, addition_len);
//	ft_print_spaces_or_nulls('0', zerro_len);
//	ft_putnbr_fd(nbr, 1);

	return (count);
}
