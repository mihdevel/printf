/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:40:05 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/25 11:37:06 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int				ft_abs_lg(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

static char			*ft_itoa_base_lg(unsigned int value, int base)
{
	char		*str;
	int			size;
	char		*tab;
	int			flag;
	unsigned int	tmp;

	flag = 0;
	size = 0;
	tab = "0123456789abcdef";
	if (base < 2 || base > 16)
		return (0);
	if (value < 0 && base == 10)
		flag = 1;
	tmp = value;
	while (tmp /= base)
		size++;
	size = size + flag + 1;
	str = (char *)malloc(sizeof(char) * size  + 1);
	str[size] = '\0';
	if (flag == 1)
		str[0] = '-';
	while (size > flag)
	{
		str[size - 1] = tab[ft_abs_lg(value % base)];
		size--;
		value /= base;
	}
	return (str);
}

static int		ft_print_chars(char c, int len)
{
	int		count;

	count = len;
	while (len-- > 0)
		ft_putchar(c);
	return (count);
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
	str = ft_itoa_base_lg(va_arg(argptr, unsigned int), 16);
	len_nbr = ft_strlen(str);
	zerro_len = zero(attr, len_nbr);
	if (attr->width > len_nbr)
		attr->space_len += attr->width - len_nbr - zerro_len;
	if (attr->precision == 0 && *str == '0' && attr->space_len != 0)
		attr->space_len += 1;
	if (attr->minus == 0)
		ft_print_chars(' ', attr->space_len);
	ft_print_chars('0', zerro_len);
	if (attr->precision != 0)
		while (len_nbr-- > 0)
			ft_putchar(*str++);
	if (attr->minus == 1)
		ft_print_chars(' ', attr->space_len);
	return (0);
}
