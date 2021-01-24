/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:26 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/24 14:02:52 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_printer(t_attr *attr, va_list argptr)
{
	int		len;
	
	len = 0;
	if (attr->type == 0)
		return (-1);
	else if (attr->type == 'd' || attr->type == 'i')
		len = ft_print_d(attr, argptr);
	else if (attr->type == 'u')
		len = ft_print_u(attr, argptr);
	else if (attr->type == 's')
		len = ft_print_s(attr, argptr);
	else if (attr->type == 'c')
		len = ft_print_c(attr, argptr);
	else if (attr->type == 'p')
		len = ft_print_p(attr, argptr);
	else if (attr->type == 'x' || attr->type == 'X')
		len = 1; // ft_print_x(attr, argptr);
	else if (attr->type == '%')
		len = ft_print_percent(attr);
	return (len);
}
