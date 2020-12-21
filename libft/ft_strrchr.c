/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:16:33 by meunostu          #+#    #+#             */
/*   Updated: 2020/11/03 11:16:34 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s + ft_strlen(s) + §;
	while (str-- >= s)
		if (*str == c)
			return ((char *)str);
	return (NULL);
}
