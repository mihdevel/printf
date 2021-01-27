/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:40:05 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 15:24:21 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		ft_nbrlen(unsigned int n, int base)
{
	if (n == 0)
		return (1);
	else if (n / base > 0)
		return (1 + ft_nbrlen(n / base, base));
	else
		return (1);
}

static char		*ft_itoa_base_x(unsigned int nbr, int base, int type)
{
	char		*str;
	size_t		len;

	if (nbr == 0) {
		return (NULL);
	}
	len = ft_nbrlen(nbr, base);
	if (!(str = (char*)malloc(sizeof(str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		if (type == 'x')
			*(str + len) = (nbr % base) + ((nbr % base > 9) ? 'a' - 10 : '0');
		else if (type == 'X')
			*(str + len) = (nbr % base) + ((nbr % base > 9) ? 'A' - 10 : '0');
		nbr /= base;
	}
	return (str);
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

int				ft_print_x(t_attr *attr, va_list argptr)
{
	char		*str;
	int			len_nbr;
	int			zerro_len;

	attr->space_len = 0;
	str = ft_itoa_base_x(va_arg(argptr, unsigned int), 16, attr->type);
	len_nbr = ft_strlen(str);
	if (len_nbr == 0)
		len_nbr++;
	zerro_len = zero(attr, len_nbr);
	if (attr->width > len_nbr)
		attr->space_len += attr->width - len_nbr - zerro_len;
	if (attr->precision == 0 && !str && attr->space_len != 0)
		attr->space_len += 1;
	if (attr->minus == 0)
		ft_print_chars(' ', attr->space_len, attr);
	ft_print_chars('0', zerro_len, attr);
	if (attr->precision != 0 || (str && *str))
		while (len_nbr-- > 0 && str)
			attr->count += ft_putchar(*str++);
	if (!str && attr->precision != 0)
		attr->count += ft_putchar('0');
	if (attr->minus == 1)
		ft_print_chars(' ', attr->space_len, attr);
	return (0);
}
