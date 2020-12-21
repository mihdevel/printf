/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <meunostu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:01:51 by meunostu          #+#    #+#             */
/*   Updated: 2020/11/01 11:55:35 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len_s1;
	int		len_s2;
	char	*cat_s;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	cat_s = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!cat_s)
		return (NULL);
	ft_strlcpy(cat_s, s1, len_s1 + 1);
	ft_strlcat(cat_s, s2, len_s2 + len_s1 + 1);
	cat_s[len_s1 + len_s2 + 1] = '\0';
	return (cat_s);
}
