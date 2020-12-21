/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:45:03 by meunostu          #+#    #+#             */
/*   Updated: 2020/11/01 11:55:35 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int nb, int fd)
{
	char	mass[10];
	int		i;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			nb = -147483648;
			ft_putchar_fd('2', fd);
		}
		nb *= -1;
	}
	i = 0;
	while (nb > 9)
	{
		mass[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	mass[i] = nb + '0';
	while (i >= 0)
		ft_putchar_fd(mass[i--], fd);
}
