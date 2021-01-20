/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:58:12 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/19 14:51:42 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_get_next_argument_char(va_list argptr)
{
	char	*arg;

	arg = va_arg(argptr, char *);
	return (arg);
}

int			ft_get_next_argument_int(va_list argptr)
{
	int		arg;

	arg = va_arg(argptr, int);
	return (arg);
}
