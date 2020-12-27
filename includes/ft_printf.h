/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:09:01 by meunostu          #+#    #+#             */
/*   Updated: 2020/12/27 13:09:02 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_FT_PRINTF_H
# define PRINTF_FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct		s_attr
{
	int				flags;
	int				width;
	int				precision;
	char			type;
}					t_attr;

int					ft_printf(const char *format, ...);
void				ft_parser(t_attr *attr, char **format, va_list factor);
int					ft_printer(t_attr *attr, char **format, va_list factor);

#endif
