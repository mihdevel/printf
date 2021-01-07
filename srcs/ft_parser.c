/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:19 by meunostu          #+#    #+#             */
/*   Updated: 2020/12/27 13:13:20 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


int			ft_parser(t_attr *struc_attr, char *format, va_list argptr)
{
	int 	i;

	i = 0;
	while (!ft_strchr(SPECIFICATORS, format[i]))
	{
		if (format[i]== '-')
			struc_attr->minus = 1;
		if (format[i] == '0')
			struc_attr->noll = 1;
		if (format[i - 1] == '.' && (format[i] == '*' || ft_isdigit(format[i])))
			struc_attr->precision = 1; //ft_get_precision(format, argptr);
		if ((format[i] == '*' || ft_isdigit(format[i])))
			struc_attr->width = 1; //f_get_width(format, argptr);
		i++;
	}
	if (format[i] == '\0')
		return (-1);
	struc_attr->type = format[i];
	return (i);
}