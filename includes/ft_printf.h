/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:09:01 by meunostu          #+#    #+#             */
/*   Updated: 2021/01/20 15:26:37 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFICATORS	"discpuxX%"

# include <stdarg.h>
# include "../libft/libft.h"

typedef struct		s_attr
{
	int				minus;
	int				zero;
	int				width;
	int				precision;
	char			type;
	int				space_len;
}					t_attr;

int					ft_printf(const char *format, ...);
int					ft_parser(t_attr *struc_attr, char *format, va_list argptr);
int					ft_printer(t_attr *attr, va_list argptr);
int					ft_get_width(char *format, t_attr *struc_attr, va_list argptr);
int					ft_get_digit(char *format, va_list attr);
char				*ft_get_next_argument_char(va_list argptr);
int					ft_get_next_argument_int(va_list argptr);
int					ft_print_s(t_attr *attr, va_list argptr);
int					ft_print_c(t_attr *attr, va_list argptr);
int					ft_print_percent(t_attr *attr);
int					ft_print_d(t_attr *attr, va_list argptr);
int					ft_print_p(t_attr *attr, va_list argptr);

#endif
