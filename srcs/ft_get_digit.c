/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 11:36:51 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/08 13:27:04 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_get_digit(char *format, va_list argptr)
{
	int		result;
	char	*start;
	char	*digit;
	int		len;

	result = 0;
	start = format;
	if (*format == '*')
		return (ft_get_next_argument_int(argptr));
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
