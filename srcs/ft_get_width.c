/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:59:54 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/08 15:07:46 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_get_width(char *format, t_attr *struc_attr, va_list argptr)
{
	if (struc_attr->width != 0 || format[0] == '0')
		return (struc_attr->width);
	return (ft_get_digit(format, argptr));
}
