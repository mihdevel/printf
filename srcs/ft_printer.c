/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:26 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/09 21:48:38 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_printer(t_attr *attr, va_list argptr)
{
	int		len;
	
	len = 0;
	if (attr->type == 0)
		return (-1);
//		return (abort_(&attr));
	else if (ft_strchr("diuoxXb", attr->type))
		len = 1; //ft_ifdigit(attr, arg);
	else if (attr->type == 's')
		len = ft_print_s(attr, argptr);
	else if (attr->type == 'c')
		len = 1;
	else if (attr->type == 'p')
		len = 1;
	else if (attr->type == '%')
		len = 1; //percent(attr);
//	free(attr);
	return (len);
}
