/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:18:47 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/26 10:37:58 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_abs_lg(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

unsigned int	ft_numlen(long value, int base)
{
	int	size;

	size = 1;
	if (base != 10 && value < 0)
		value = -value;
	if (value < 0)
		size++;
	while (value / base)
	{
		size++;
		value /= base;
	}
	return (size);
}

char	*ft_itoa_base_lg(unsigned long long value, int base)
{
	unsigned long long				size;
	unsigned long long 			nbr;
	char			*result;
	char			*ref_base;

	nbr = value;
	ref_base = "0123456789abcdef";
	if (base < 2 || base > 16)
		return (NULL);
	size = ft_numlen(nbr, base);
	if (!(result = (char*)malloc(sizeof(*result) * (size + 1))))
		return (NULL);
	result[size--] = '\0';
	result[0] = (value < 0 ? '-' : '0');
	if (value < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		result[size--] = ref_base[nbr % base];
		nbr /= base;
	}
	return (result);
}

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

static int		ft_print_spaces_or_nulls(char c, int len)
{
	int			count;

	count = len;
	while (len-- > 0)
		ft_putchar(c);
	return (count);
}

int				ft_print_p(t_attr *attr, va_list argptr)
{
	char		*str;
	int			len;
	char		addition_char;
	int			addition_len;
	int			count;

	count = 0;
	addition_len = 0;
	str = ft_itoa_base_lg((unsigned long long)va_arg(argptr, void *), 16);
	len = ft_strlen(str);
	addition_char = ft_get_addition_char(attr, len);
	if (attr->width > attr->precision)
		addition_len = len < attr->precision ? attr->width - len - 2 :
			attr->width - attr->precision - 2;
	if (attr->minus == 0)
		count += ft_print_spaces_or_nulls(addition_char, addition_len);
	count += ft_putstr("0x");
	while (attr->precision > 0)
	{
		count += ft_putchar(*(str)++);
		attr->precision--;
	}
	if (attr->minus == 1)
		count += ft_print_spaces_or_nulls(addition_char, addition_len);
	return (count);
}
