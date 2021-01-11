/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:44:55 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/09 22:11:55 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_print_s(t_attr *attr, va_list argptr)
{
	char	*str;
	int		len;

	str = ft_get_next_argument_char(argptr);
	len = ft_strlen(str);
	if (attr->width && attr->width > len)
	{
		if (attr->minus)
			len = 1; // ft_rint_space();
		else if (attr->zero)
			len = 1; // ft_rint_zero();
		else
		{
			ft_putstr(str);
			// ft_rint_space();
		}
	} else
		ft_putstr(str);

	if (attr->precision && attr->precision < len)
		len = attr->precision;
	ft_putstr(str); // Обрезать длинну
	return (0);
}
