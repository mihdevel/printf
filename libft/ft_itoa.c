/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:43:33 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/20 12:36:24 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_reverse(char *str, int len)
{
	int		i;
	char	c;

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

static	int		counter(long n)
{
	int len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char			*ft_itoa(long n)
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
