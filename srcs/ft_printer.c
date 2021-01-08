/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:13:26 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/08 14:58:35 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_printer(t_attr *attr, const char **format, va_list factor)
{
	int		len;
	
	len = 0;
	if (attr->type == 0)
		return (-1);
//		return (abort_(&attr));
	else if (ft_strchr("diuoxXb", attr->type))
		len = 1; //ft_ifdigit(attr, arg);
	else if (attr->type == 's' || attr->type == 'S')
		len = 1; //ft_ifstr(attr, arg);
	else if (attr->type == 'c' || attr->type == 'C')
		len = 1; //ft_ifchar(attr, arg);
	else if (attr->type == 'f')
		len = 1; //ft_iffloat(attr, arg);
	else if (attr->type == 'p')
		len = 1; //ft_ifptr(attr, arg);
	else if (attr->type == '%')
		len = 1; //percent(attr);
//	free(attr);
	return (len);
}
