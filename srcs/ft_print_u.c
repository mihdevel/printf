/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:03:06 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/24 14:40:06 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void			 ft_putnbr_u(unsigned int nb)
{
	char			mass[10];
	int				i;

	i = 0;
	while (nb > 9)
	{
		mass[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	mass[i] = nb + '0';
	while (i >= 0)
		ft_putchar_fd(mass[i--], 1);
}

static	char		*ft_reverse(char *str, int len)
{
	int				i;
	char			c;

	i = 0;
	c = 0;
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

static	int			counter(int n)
{
	int				len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

static char				*ft_itoa_u(unsigned int n)
{
	int				n2;
	int				len;
	char			*str;
	unsigned int	nbr;

	len = counter(n);
	nbr = (n < 0) ? (unsigned int)n * -1 : n;
	n2 = (n < 0) ? 1 : 0;
	len = (n < 0) ? len + 1 : len;
	str = (char *)malloc(len + 1);
	len = 0;
	if (str == NULL)
		return (str);
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
	str = ft_reverse(str, len - 1);
	return (str);
}

static int			ft_print_chars(char c, int len)
{
	int				count;

	count = len;
	while (len-- > 0)
		ft_putchar(c);
	return (count);
}

static int		format_print_d(t_attr *attr, int zerro_len, unsigned int nbr)
{
	if (attr->precision == 0 && nbr == 0 && attr->space_len != 0)
		attr->space_len += 1;
	if (attr->minus == 0)
		ft_print_chars(' ', attr->space_len);
	ft_print_chars('0', zerro_len);
	if (attr->precision != 0)
		ft_putnbr_u(nbr);
	if (attr->minus == 1)
		ft_print_chars(' ', attr->space_len);
	return (0);
}

static int			zero(t_attr *attr, int len_nbr)
{
	int				zerro_len;

	zerro_len = 0;
	if (attr->precision > len_nbr)
		zerro_len = attr->precision - len_nbr;
	if (attr->zero && attr->precision == -1)
		zerro_len = attr->width - len_nbr;
	return (zerro_len);
}

int					ft_print_u(t_attr *attr, va_list argptr)
{
	unsigned int	nbr;
	int				len_nbr;
	int				zerro_len;

	attr->space_len = 0;
	nbr = va_arg(argptr, unsigned int);
	len_nbr = ft_strlen(ft_itoa_u(nbr));
	zerro_len = zero(attr, len_nbr);
	if (attr->width > len_nbr)
		attr->space_len += attr->width - len_nbr - zerro_len;
	return (format_print_d(attr, zerro_len, nbr));
}
