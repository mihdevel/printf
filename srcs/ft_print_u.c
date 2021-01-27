/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:03:06 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 18:31:14 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void			ft_putnbr_u(unsigned int nb)
{
	char			mass[10];
	int				i;

	i = 0;
	while (nb > 9)
	{
		mass[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	mass[i] = nb + '0';
	while (i >= 0)
		ft_putchar_fd(mass[i--], 1);
}

static int			zero(t_attr *attr, int len_nbr)
{
	int				zerro_len;

	zerro_len = 0;
	if (attr->precision > len_nbr)
		zerro_len = attr->precision - len_nbr;
	if (attr->zero && attr->precision == -1)
		zerro_len = attr->width - len_nbr;
	return (zerro_len);
}

int					ft_print_u(t_attr *attr, va_list argptr)
{
	unsigned int	nbr;
	int				len_nbr;
	int				zerro_len;
	char			*str;

	nbr = va_arg(argptr, unsigned int);
	if (!(str = ft_itoa_u(nbr)))
		return (-1);
	len_nbr = ft_strlen(str);
	free(str);
	if (nbr == 0 && attr->precision == 0)
		len_nbr--;
	zerro_len = zero(attr, len_nbr);
	if (attr->width > len_nbr)
		attr->space_len += attr->width - len_nbr - zerro_len;
	if (!(attr->precision == 0 && nbr == 0))
		attr->count += len_nbr;
	if (attr->minus == 0)
		ft_print_chars(' ', attr->space_len, attr);
	ft_print_chars('0', zerro_len, attr);
	if (!(attr->precision == 0 && nbr == 0))
		ft_putnbr_u(nbr);
	if (attr->minus == 1)
		ft_print_chars(' ', attr->space_len, attr);
	return (0);
}
