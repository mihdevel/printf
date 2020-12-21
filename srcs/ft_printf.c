#include <unistd.h>
#include "../includes/ft_printf.h"

int				ft_printf(const char *format, ...)
{
	int			count;
	va_list		factor;
	char		*str;

	count = 0;
	va_start(factor, format);

	while(*format != '\0')
	{
		if (*format == '%')
		{
			*format++;
			count += ft_parser_and_print(**format, factor);
		}
		else
		{
			write(1, &format, 1);
			count++;
		}
		format++;
	}
	va_end(factor);
	return (count);
}



