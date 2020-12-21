/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:58:33 by meunostu          #+#    #+#             */
/*   Updated: 2020/11/01 11:55:35 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*dest;
	unsigned int	count;
	unsigned int	size;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
		i++;
	if (start >= i)
		return (ft_strdup(""));
	size = i - start;
	if (len > size)
		len = size;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (count < len)
	{
		dest[count] = s[start + count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
