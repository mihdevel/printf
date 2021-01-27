/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:58:12 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/27 16:50:35 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char				*ft_get_next_argument_char(va_list argptr)
{
	char			*arg;

	arg = va_arg(argptr, char *);
	return (arg);
}

int					ft_get_next_argument_int(va_list argptr)
{
	int				arg;

	arg = va_arg(argptr, int);
	return (arg);
}

static	char		*ft_reverse(char *str, int len)
{
	int				i;
	char			c;

	i = 0;
	while (len >= i)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return (str);
}

static	int			counter(unsigned int n)
{
	int				len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char				*ft_itoa_u(unsigned int n)
{
	int				n2;
	int				len;
	char			*str;
	unsigned int	nbr;

	len = counter(n);
	nbr = (n < 0) ? (unsigned int)n * -1 : n;
	n2 = (n < 0) ? 1 : 0;
	len = (n < 0) ? len + 1 : len;
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	len = 0;
	if (n == 0)
		str[len++] = '0';
	while (nbr)
	{
		str[len++] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n2)
		str[len++] = '-';
	str[len] = '\0';
	return (ft_reverse(str, len - 1));
}
