#include "includes/ft_printf.h"

int	main()
{
	char 	*format;
	int		width = 10;
	int		precision = 4;
	char	*str = "Hello";
	char	c = 'h';
	int		nbr = -32;

	printf("%s\n", "Specificator -  s");
	format = "|%-0*.*s|";
	printf(" - %d\n", printf(format, width, precision, str));
	printf(" - %d\n\n", ft_printf(format, width, precision, str));

	format = "|%0*.*s|";
	printf(" - %d\n", printf(format, width, precision, str));
	printf(" - %d\n\n", ft_printf(format, width, precision, str));

	format = "|%*.*s|";
	printf(" - %d\n", printf(format, width, precision, str));
	printf(" - %d\n\n", ft_printf(format, width, precision, str));

	format = "|%*.s|";
	printf(" - %d\n", printf(format, width, str));
	printf(" - %d\n\n", ft_printf(format, width, str));

	format = "|%0*.0s|";
	printf(" - %d\n", printf(format, width, str));
	printf(" - %d\n\n", ft_printf(format, width, str));

	format = "|%-*s|";
	printf(" - %d\n", printf(format, width, str));
	printf(" - %d\n\n", ft_printf(format, width, str));

	format = "|%*s|";
	printf(" - %d\n", printf(format, width, str));
	printf(" - %d\n\n", ft_printf(format, width, str));

	format = "|%s|";
	printf(" - %d\n", printf(format, str));
	printf(" - %d\n\n", ft_printf(format, str));

//	format = "|%.*s|";
//	printf(" - %d\n", printf(format, precision, str));
//	printf(" - %d\n\n", ft_printf(format, precision, str));

//	format = "|%.*s|";
//	printf(" - %d\n", printf(format, -precision, str));
//	printf(" - %d\n\n", ft_printf(format, -precision, str));

	printf("%s\n", "Specificator -  c");
	format = "|%-0*.*c|";
	printf(" - %d\n", printf(format, width, precision, c));
	printf(" - %d\n\n", ft_printf(format, width, precision, c));

	format = "|%0*.*c|";
	printf(" - %d\n", printf(format, width, precision, c));
	printf(" - %d\n\n", ft_printf(format, width, precision, c));

	format = "|%*.*c|";
	printf(" - %d\n", printf(format, width, precision, c));
	printf(" - %d\n\n", ft_printf(format, width, precision, c));

	format = "|%*.c|";
	printf(" - %d\n", printf(format, width, c));
	printf(" - %d\n\n", ft_printf(format, width, c));

	format = "|%0*.0c|";
	printf(" - %d\n", printf(format, width, c));
	printf(" - %d\n\n", ft_printf(format, width, c));

	format = "|%-*c|";
	printf(" - %d\n", printf(format, width, c));
	printf(" - %d\n\n", ft_printf(format, width, c));

	format = "|%*c|";
	printf(" - %d\n", printf(format, width, c));
	printf(" - %d\n\n", ft_printf(format, width, c));

	format = "|%c|";
	printf(" - %d\n", printf(format, c));
	printf(" - %d\n\n", ft_printf(format, c));

//	format = "|%.*c|";
//	printf(" - %d\n", printf(format, precision, c));
//	printf(" - %d\n\n", ft_printf(format, precision, c));
//
//	format = "|%.*c|";
//	printf(" - %d\n", printf(format, -precision, c));
//	printf(" - %d\n\n", ft_printf(format, -precision, c));

	printf("%s\n", "Specificator -  %");
	format = "|%-0*.*%|";
	printf(" - %d\n", printf(format, width, precision));
	printf(" - %d\n\n", ft_printf(format, width, precision));

	format = "|%0*.*%|";
	printf(" - %d\n", printf(format, width, precision));
	printf(" - %d\n\n", ft_printf(format, width, precision));

	format = "|%*.*%|";
	printf(" - %d\n", printf(format, width, precision));
	printf(" - %d\n\n", ft_printf(format, width, precision));

	format = "|%*.%|";
	printf(" - %d\n", printf(format, width));
	printf(" - %d\n\n", ft_printf(format, width));

	format = "|%0*.0%|";
	printf(" - %d\n", printf(format, width));
	printf(" - %d\n\n", ft_printf(format, width));

	format = "|%-*%|";
	printf(" - %d\n", printf(format, width));
	printf(" - %d\n\n", ft_printf(format, width));

	format = "|%*%|";
	printf(" - %d\n", printf(format, width));
	printf(" - %d\n\n", ft_printf(format, width));

	format = "|%%|";
	printf(" - %d\n", printf(format, c));
	printf(" - %d\n\n", ft_printf(format, c));

//	format = "|%.*%|";
//	printf(" - %d\n", printf(format, precision));
//	printf(" - %d\n\n", ft_printf(format, precision));
//
//	format = "|%.*%|";
//	printf(" - %d\n", printf(format, -precision));
//	printf(" - %d\n\n", ft_printf(format, -precision));

	printf("%s\n", "Specificator -  d");
	format = "|%-0*.*d|";
	printf(" - %d\n", printf(format, width, precision, nbr));
	printf(" - %d\n\n", ft_printf(format, width, precision, nbr));

	format = "|%0*.*d|";
	printf(" - %d\n", printf(format, width, precision, nbr));
	printf(" - %d\n\n", ft_printf(format, width, precision, nbr));

	format = "|%*.*d|";
	printf(" - %d\n", printf(format, width, precision, nbr));
	printf(" - %d\n\n", ft_printf(format, width, precision, nbr));

	format = "|%*.d|";
	printf(" - %d\n", printf(format, width, nbr));
	printf(" - %d\n\n", ft_printf(format, width, nbr));

	format = "|%0*.0d|";
	printf(" - %d\n", printf(format, width, nbr));
	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//	format = "|%-*d|";
//	printf(" - %d\n", printf(format, width, nbr));
//	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//	format = "|%*d|";
//	printf(" - %d\n", printf(format, width, nbr));
//	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//	format = "|%d|";
//	printf(" - %d\n", printf(format, nbr));
//	printf(" - %d\n\n", ft_printf(format, nbr));

//	format = "|%.*d|";
//	printf(" - %d\n", printf(format, precision, nbr));
//	printf(" - %d\n\n", ft_printf(format, precision, nbr));

//	format = "|%.*d|";
//	printf(" - %d\n", printf(format, -precision, nbr));
//	printf(" - %d\n\n", ft_printf(format, -precision, nbr));





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