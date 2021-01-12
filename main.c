#include "includes/ft_printf.h"

int	main()
{
	int		i;
	char 	*format = "|%-0*.*s|";
	int		width = 10;
	int		precision = 2;
	char	*str = "Hello";
	int		num = 32;

	printf("i - %d\n", printf(format, width, precision, str));
	printf("i - %d\n", ft_printf(format, width, precision, str));

	format = "|%-*.*s|";
	printf("i - %d\n", printf(format, width, precision, str));
	printf("i - %d\n", ft_printf(format, width, precision, str));

	format = "|%-*s|";
	printf("i - %d\n", printf("|%-*s|", width, str));
	printf("i - %d\n", ft_printf(format, width, str));

	format = "|%*s|";
	printf("i - %d\n", printf(format, width, str));
	printf("i - %d\n", ft_printf(format, width, str));

	format = "|%.*s|";
	printf("i - %d\n", printf(format, precision, str));
	printf("i - %d\n", ft_printf(format, precision, str));

	format = "|%.*s|";
	printf("i - %d\n", printf(format, -precision, str));
	printf("i - %d\n", ft_printf(format, -precision, str));

	format = "|%s|";
	printf("i - %d\n", printf(format, str));
	printf("i - %d\n", ft_printf(format, str));



//	ft_printf("qw%-zzs", "afavvvv");

//	printf("%*.*s%s%s\n\n", 6, 8, "qw", "er", "ty");
//	ft_printf("%s%s%s\n\n", "qw", "er", "ty");

//	printf("%-*hhd\n", 50, (unsigned char)15000000);
//	ft_printf("%-*hhd", 50, (unsigned  char)15000000);

//	ft_printf("%d\n\n", 13);
//	ft_printf("%d\n\n", 13);
//
//	printf("%x\n", 13);
//	ft_printf("%x\n\n", 13);
//
//	printf("%s\n", "");
//	ft_printf("%s\n\n", "");
//
//	printf("%s 123 %s\n", "s1", "s2");
//	ft_printf("%s 123 %s\n\n", "s1", "s2");
//
//	printf("%10s\n", "d");
//	ft_printf("%10s\n\n", "d");
//
//	printf("%10s\n", "12345678901");
//	ft_printf("%10s\n\n", "12345678901");
//
//	printf("%-10.9s\n", "12345678901");
//	ft_printf("%-10.9s\n\n", "12345678901");
//
//	printf("%*.*s test\n", 20, 6, "123");
//	ft_printf("%*.*s test\n\n", 20, 6, "123");
//
//	printf("%*.*ld\n", 10, 5, 12345678901);
//	ft_printf("%*.*d\n\n", 10, 5, 12345678901);
//
//	printf("%0*.*d\n", 10, 5, 1234567890);
//	ft_printf("%0*.*d\n\n", 10, 5, 1234567890);
//
//	printf("%0*.*d\n", 20, 5, 1234567890);
//	ft_printf("%0*.*d\n\n", 20, 5, 1234567890);
//
//	printf("%0*d\n", 20, 1234567890);
//	ft_printf("%0*d\n\n", 20, 1234567890);
//
//	printf("%*d\n", 20, -1234567890);
//	ft_printf("%*d\n\n", 20, -1234567890);
//
//	printf("%0*ld\n", 20, -12345678901);
//	ft_printf("%0*d\n\n", 20, -12345678901);
//
//	printf("%0*d\n", 20, -1234567890);
//	ft_printf("%0*d\n\n", 20, -1234567890);
//
//	printf("%*d\n", 20, -1234567890);
//	ft_printf("%*d\n\n", 20, -1234567890);

	return(0);
}