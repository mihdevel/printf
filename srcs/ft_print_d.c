/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:03:06 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 18:38:10 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			ft_print_chars(char c, int len, t_attr *attr)
{
	while (len-- > 0)
		attr->count += ft_putchar(c);
}

static int		format_print_d(t_attr *attr, int zerro_len, long nbr, int minus)
{
	if (minus && attr->zero && !attr->minus && attr->precision == -1)
		zerro_len -= 1;
	else if (minus)
		attr->space_len -= 1;
	if (attr->minus == 0)
		ft_print_chars(' ', attr->space_len, attr);
	if (minus)
		ft_print_chars('-', 1, attr);
	ft_print_chars('0', zerro_len, attr);
	if (!(attr->precision == 0 && nbr == 0))
		ft_putnbr_fd(nbr, 1);
	if (attr->minus == 1)
		ft_print_chars(' ', attr->space_len, attr);
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
	long		nbr;
	char		*str;
	int			len_nbr;
	int			zerro_len;
	int			nbr_minus;

	attr->space_len = 0;
	nbr_minus = 0;
	zerro_len = 0;
	nbr = ft_get_next_argument_int(argptr);
	if (nbr < 0)
	{
		nbr = -nbr;
		nbr_minus = 1;
	}
	if (!(str = ft_itoa(nbr)))
		return (-1);
	len_nbr = !(nbr == 0 && attr->precision == 0) ? ft_strlen(str) : 0;
	if (attr->minus != 1 || attr->precision > 0)
		zerro_len = zero(attr, len_nbr);
	if (attr->width > len_nbr)
		attr->space_len += attr->width - len_nbr - zerro_len;
	attr->count += len_nbr;
	free(str);
	return (format_print_d(attr, zerro_len, nbr, nbr_minus));
}
