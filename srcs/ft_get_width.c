/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:59:54 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/11 19:12:44 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		ft_get_next_argument_with(t_attr *attr, va_list argptr)
{
	int			nbr;

	nbr = ft_get_next_argument_int(argptr);
	if (nbr < 0)
	{
		attr->minus = 1;
		attr->zero = 0;
		return (nbr * -1);
	}
	else
		return (nbr);
}

int				ft_get_width(char *format, t_attr *struc_attr, va_list argptr)
{
	int			result;
	char		*start;
	char		*digit;
	int			len;

	if (struc_attr->width != -1 || format[0] == '0')
		return (struc_attr->width);
	if (*format == '*')
		return (ft_get_next_argument_with(struc_attr, argptr));
	start = format;
	format++;
	while (ft_isdigit(*format))
		format++;
	len = format - start;
	if (len == 0)
		return (0);
	else
	{
		digit = ft_substr(start, 0, len);
		result = ft_atoi(digit);
		free(digit);
		return (result);
	}
}
