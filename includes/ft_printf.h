#ifndef PRINTF_FT_PRINTF_H
#define PRINTF_FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"


int		ft_printf(const char *format, ...);
int		ft_parser_and_print(char **format, va_list factor);

#endif
