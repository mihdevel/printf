/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:16:27 by meunostu          #+#    #+#             */
/*   Updated: 2020/11/03 11:16:28 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	size_t			len;
	char			*str;

	str = (char *)s;
	len = ft_strlen(str) + 1;
	while (len--)
		if (*str++ == c)
			return (str - 1);
	return (NULL);
}
