/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:03:06 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/25 12:10:49 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		ft_print_chars(char c, int len)
{
	int		count;

	count = len;
	while (len-- > 0)
		ft_putchar(c);
	return (count);
}

static int		format_print_d(t_attr *attr, int zerro_len, int nbr, int minus)
{
	if (attr->precision == 0 && nbr == 0 && attr->space_len != 0)
		attr->space_len += 1;
	if (attr->minus == 0)
		ft_print_chars(' ', attr->space_len);
	if (minus)
		ft_print_chars('-', 1);
	ft_print_chars('0', zerro_len);
	if (attr->precision != 0)
		ft_putnbr_fd(nbr, 1);
	if (attr->minus == 1)
		ft_print_chars(' ', attr->space_len);
	return (0);
}

static int		zero(t_attr *attr, int len_nbr)
{
	int			zerro_len;

	zerro_len = 0;
	if (attr->precision > len_nbr)
		zerro_len = attr->precision - len_nbr;
	if (attr->zero && attr->precision == -1)
		zerro_len = attr->width - len_nbr;
	return (zerro_len);
}

int				ft_print_d(t_attr *attr, va_list argptr)
{
	int			nbr;
	int			len_nbr;
	int			zerro_len;
	int			nbr_minus;

	attr->space_len = 0;
	nbr_minus = 0;
	zerro_len = 0;
	nbr = ft_get_next_argument_int(argptr);
	len_nbr = ft_strlen(ft_itoa(nbr));
	if (nbr < 0)
	{
		nbr = -nbr;
		len_nbr -= 1;
		nbr_minus = 1;
	}
	if (attr->minus != 1 || attr->precision > 0)
		zerro_len = zero(attr, len_nbr);
	if (attr->width > len_nbr)
		attr->space_len += attr->width - len_nbr - zerro_len;
	if (nbr_minus && attr->zero && !attr->minus && attr->precision == -1)
		zerro_len -= 1;
	else if (nbr_minus)
		attr->space_len -= 1;
	return (format_print_d(attr, zerro_len, nbr, nbr_minus));
}
