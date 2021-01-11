/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:44:55 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/11 17:56:44 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char		ft_get_addition_char(t_attr *struc_attr, int len)
{
	if (struc_attr->precision == -1)
		struc_attr->precision = len;
	if (struc_attr->minus == 1 || (!struc_attr->minus && !struc_attr->zero))
		return (' ');
	else if (struc_attr->zero == 1)
		return ('0');
	else
		return (' ');
}

static int		ft_get_addition_len(t_attr *struc_attr, int len)
{
	if (len < struc_attr->precision)
		return (struc_attr->width - len);
	else
		return (struc_attr->width - struc_attr->precision);
}

static void		ft_print_spaces_or_nulls(char c, int len)
{
	while (len-- > 0)
		ft_putchar(c);
}

int				ft_print_s(t_attr *struc_attr, va_list argptr)
{
	char		*str;
	int			len;
	int			i;
	char		addition_char;
	int			addition_len;

	i = 0;
	addition_len = 0;
	str = ft_get_next_argument_char(argptr);
	len = ft_strlen(str);
	addition_char = ft_get_addition_char(struc_attr, len);
	if (struc_attr->width > struc_attr->precision)
		addition_len = len < struc_attr->precision ? struc_attr->width - len :
				struc_attr->width - struc_attr->precision;
	if (struc_attr->minus == 0)
		ft_print_spaces_or_nulls(addition_char, addition_len);
	while (struc_attr->precision > 0)
	{
		ft_putchar(str[i]);
		struc_attr->precision--;
		i++;
	}
	if (struc_attr->minus == 1)
		ft_print_spaces_or_nulls(addition_char, addition_len);
	return (0);
}
