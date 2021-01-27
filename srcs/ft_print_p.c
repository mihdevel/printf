/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:18:47 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 13:40:44 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		ft_nbrlen(unsigned long long n, int base)
{
	if (n == 0)
		return (1);
	else if (n / base > 0)
		return (1 + ft_nbrlen(n / base, base));
	else
		return (1);
}

static char		*ft_itoa_base_p(unsigned long long nbr, int base)
{
	char		*str;
	size_t		len;

	if (nbr == 0)
		return (NULL);
	len = ft_nbrlen(nbr, base);
	if (!(str = (char*)malloc(sizeof(str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		*(str + len) = (nbr % base) + ((nbr % base > 9) ? 'a' - 10 : '0');
		nbr /= base;
	}
	return (str);
}

static char		ft_get_addition_char(t_attr *attr)
{
	if (attr->minus == 1 || (!attr->minus && !attr->zero))
		return (' ');
	else if (attr->zero == 1)
		return ('0');
	else
		return (' ');
}

int				ft_print_p(t_attr *attr, va_list argptr)
{
	char		*str;
	int			len;
	char		addition_char;

	attr->space_len = 0;
	str = ft_itoa_base_p((unsigned long long)va_arg(argptr, void *), 16);
	len = ft_strlen(str);
	addition_char = ft_get_addition_char(attr);
	if (attr->width > attr->precision)
		attr->space_len = attr->width - len - 2;
	if (attr->precision == -1 && !str)
		attr->space_len--;
	if (attr->minus == 0)
		ft_print_chars(addition_char, attr->space_len, attr);
	attr->count +=  ft_putstr("0x");
	while (len-- > 0 || (str && *str))
		attr->count += ft_putchar(*(str)++);
	if (attr->precision == -1 && !str)
		attr->count += ft_putchar('0');
	if (attr->minus == 1)
		ft_print_chars(addition_char, attr->space_len, attr);
	return (0);
}
