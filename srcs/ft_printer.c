/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:26 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 16:00:01 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_printer(t_attr *attr, va_list argptr)
{
	int		ret;

	ret = 0;
	if (attr->type == 0)
		return (-1);
	else if (attr->type == 'd' || attr->type == 'i')
		ret = ft_print_d(attr, argptr);
	else if (attr->type == 'u')
		ret = ft_print_u(attr, argptr);
	else if (attr->type == 's')
		ret = ft_print_s(attr, argptr);
	else if (attr->type == 'c')
		ret = ft_print_c(attr, argptr);
	else if (attr->type == 'p')
		ret = ft_print_p(attr, argptr);
	else if (attr->type == 'x' || attr->type == 'X')
		ret = ft_print_x(attr, argptr);
	else if (attr->type == '%')
		ret = ft_print_percent(attr);
	return (ret);
}
