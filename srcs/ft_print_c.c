/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_с.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:31:41 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/22 14:36:02 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char		ft_get_addition_char(t_attr *attr)
{
	if (attr->minus == 1 || (!attr->minus && !attr->zero))
		return (' ');
	else if (attr->zero == 1)
		return ('0');
	else
		return (' ');
}

static int		ft_print_spaces_or_nulls(char c, int len)
{
	int		count;

	count = len;
	while (len-- > 0)
		ft_putchar(c);
	return (count);
}

int				ft_print_c(t_attr *attr, va_list argptr)
{
	int		c;
	char		addition_char;
	int			addition_len;
	int			count;

	count = 0;
	addition_len = 0;
	c = va_arg(argptr, int);
	addition_char = ft_get_addition_char(attr);
	if (attr->width > 1)
		addition_len = attr->width - 1;
	if (attr->minus == 0)
		count += ft_print_spaces_or_nulls(addition_char, addition_len);
	count += ft_putchar(c);
	if (attr->minus == 1)
		count += ft_print_spaces_or_nulls(addition_char, addition_len);
	return (count);
}
