/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:26 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/12 11:54:19 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_printer(t_attr *attr, va_list argptr)
{
	int		len;
	
	len = 0;
	if (attr->type == 0)
		return (-1);
	else if (ft_strchr("diuxX", attr->type))
		len = ft_print_d(attr, argptr);
	else if (attr->type == 's')
		len = ft_print_s(attr, argptr);
	else if (attr->type == 'c')
		len = ft_print_c(attr, argptr);
	else if (attr->type == 'p')
		len = 1;
	else if (attr->type == '%')
		len = ft_print_percent(attr);
	return (len);
}
