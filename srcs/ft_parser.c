/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:19 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 16:37:22 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void		ft_init_struct(t_attr *struc_attr)
{
	struc_attr->zero = 0;
	struc_attr->minus = 0;
	struc_attr->width = -1;
	struc_attr->precision = -1;
}

int				ft_parser(t_attr *attr, char *format, va_list argptr)
{
	int			i;

	i = 0;
	ft_init_struct(attr);
	while (!ft_strchr(SPECIFICATORS, format[i]))
	{
		if (format[i] == '-')
			attr->minus = 1;
		if (format[i] == '0' && !ft_isdigit(format[i - 1]) &&
			format[i - 1] != '.')
			attr->zero = 1;
		if ((format[i] == '*' || ft_isdigit(format[i])) &&
			!ft_strnstr(format, ".", i))
			attr->width = ft_get_width(format + i, attr, argptr);
		if (format[i] == '.' && !ft_isdigit(format[i + 1]))
			attr->precision = 0;
		if (format[i - 1] == '.' && (format[i] == '*' || ft_isdigit(format[i])))
			attr->precision = ft_get_digit(format + i, argptr);
		i++;
	}
	if (attr->precision < -1)
		attr->precision = -1;
	attr->type = format[i];
	return (i);
}
