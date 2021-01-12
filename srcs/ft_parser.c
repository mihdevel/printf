/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:19 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/11 09:52:20 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void		ft_init_struct(t_attr *struc_attr)
{
	struc_attr->zero = 0;
	struc_attr->minus = 0;
	struc_attr->width = 0;
	struc_attr->precision = -1;
}

int				ft_parser(t_attr *struc_attr, char *format, va_list argptr)
{
	int			i;

	i = 0;
	ft_init_struct(struc_attr);
	while (!ft_strchr(SPECIFICATORS, format[i]))
	{
		if (format[i] == '-')
			struc_attr->minus = 1;
		if (format[i] == '0' && !ft_isdigit(format[i - 1]) && format[i - 1] != '.')
			struc_attr->zero = 1;
		if (format[i] == '*' || ft_isdigit(format[i]) && format[i - 1] != '.')
			struc_attr->width = ft_get_width(format + i, struc_attr, argptr);
		if (format[i] == '.' && !ft_isdigit(format[i + 1]))
			struc_attr->precision = 0;
		if (format[i - 1] == '.' && (format[i] == '*' || ft_isdigit(format[i])))
			struc_attr->precision = ft_get_digit(format + i, argptr);
		i++;
	}
	struc_attr->type = format[i];
	return (i);
}
