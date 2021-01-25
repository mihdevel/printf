#include <stdio.h>
#include "includes/ft_printf.h"

int	main()
{
//	char 	*format;
//	int		width = 10;
//	int		precision = 4;
//	char	*str = "Hello";
//	char	c = 'h';
//	int		nbr = -33;

//	printf("%s\n", "Specificator -  s");
//	format = "|%-0*.*s|";
//	printf(" - %d|%s\n", printf(format, width, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, str));
//
//	format = "|%0*.*s|";
//	printf(" - %d|%s\n", printf(format, width, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, str));
//
//	format = "|%*.*s|";
//	printf(" - %d|%s\n", printf(format, width, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, str));
//
//	format = "|%*.s|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%0*.0s|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%-*s|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%*s|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%s|";
//	printf(" - %d|%s\n", printf(format, str), format);
//	printf(" - %d\n\n", ft_printf(format, str));
//
//	format = "|%.*s|";
//	printf(" - %d|%s\n", printf(format, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, precision, str));
//
//	format = "|%.*s|";
//	printf(" - %d|%s\n", printf(format, -precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, -precision, str));
//
//
//	printf("%s\n", "Specificator -  c");
//	format = "|%-0*.*c|";
//	printf(" - %d|%s\n", printf(format, width, precision, c), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, c));
//
//	format = "|%0*.*c|";
//	printf(" - %d|%s\n", printf(format, width, precision, c), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, c));
//
//	format = "|%*.*c|";
//	printf(" - %d|%s\n", printf(format, width, precision, c), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, c));
//
//	format = "|%*.c|";
//	printf(" - %d|%s\n", printf(format, width, c), format);
//	printf(" - %d\n\n", ft_printf(format, width, c));
//
//	format = "|%0*.0c|";
//	printf(" - %d|%s\n", printf(format, width, c), format);
//	printf(" - %d\n\n", ft_printf(format, width, c));
//
//	format = "|%-*c|";
//	printf(" - %d|%s\n", printf(format, width, c), format);
//	printf(" - %d\n\n", ft_printf(format, width, c));
//
//	format = "|%*c|";
//	printf(" - %d|%s\n", printf(format, width, c), format);
//	printf(" - %d\n\n", ft_printf(format, width, c));
//
//	format = "|%c|";
//	printf(" - %d|%s\n", printf(format, c), format);
//	printf(" - %d\n\n", ft_printf(format, c));
//
//	format = "|%.*c|";
//	printf(" - %d|%s\n", printf(format, precision, c), format);
//	printf(" - %d\n\n", ft_printf(format, precision, c));
//
//	format = "|%.*c|";
//	printf(" - %d|%s\n", printf(format, -precision, c), format);
//	printf(" - %d\n\n", ft_printf(format, -precision, c));
//
//
//	printf("%s\n", "Specificator -  %");
//	format = "|%-0*.*%|";
//	printf(" - %d|%s\n", printf(format, width, precision), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision));
//
//	format = "|%0*.*%|";
//	printf(" - %d|%s\n", printf(format, width, precision), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision));
//
//	format = "|%*.*%|";
//	printf(" - %d|%s\n", printf(format, width, precision), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision));
//
//	format = "|%*.%|";
//	printf(" - %d|%s\n", printf(format, width), format);
//	printf(" - %d\n\n", ft_printf(format, width));
//
//	format = "|%0*.0%|";
//	printf(" - %d|%s\n", printf(format, width), format);
//	printf(" - %d\n\n", ft_printf(format, width));
//
//	format = "|%-*%|";
//	printf(" - %d|%s\n", printf(format, width), format);
//	printf(" - %d\n\n", ft_printf(format, width));
//
//	format = "|%*%|";
//	printf(" - %d|%s\n", printf(format, width), format);
//	printf(" - %d\n\n", ft_printf(format, width));
//
//	format = "|%%|";
//	printf(" - %d|%s\n", printf(format, c), format);
//	printf(" - %d\n\n", ft_printf(format, c));
//
//	format = "|%.*%|";
//	printf(" - %d|%s\n", printf(format, precision), format);
//	printf(" - %d\n\n", ft_printf(format, precision));
//
//	format = "|%.*%|";
//	printf(" - %d|%s\n", printf(format, -precision), format);
//	printf(" - %d\n\n", ft_printf(format, -precision));


//	printf("%s\n", "Specificator -  d");
//
//	format = "|%7d|";
//	printf(" - %d|%s\n", printf(format, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, nbr));
//
//	format = "|%-0*.*d|";
//	printf(" - %d|%s\n", printf(format, width, precision, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, nbr));
//
//	format = "|%0*.*d|";
//	printf(" - %d|%s\n", printf(format, width, precision, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, nbr));
//
//	format = "|%*.*d|";
//	printf(" - %d|%s\n", printf(format, width, precision, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, nbr));
//
//	format = "|%*.d|";
//	printf(" - %d|%s\n", printf(format, width, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//	format = "|%0*.0d|";
//	printf(" - %d|%s\n", printf(format, width, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//	format = "|%0*d|";
//	printf(" - %d|%s\n", printf(format, width, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//
//	format = "|%-*d|";
//	printf(" - %d|%s\n", printf(format, width, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//	format = "|%*d|";
//	printf(" - %d|%s\n", printf(format, width, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, width, nbr));
//
//	format = "|%d|";
//	printf(" - %d|%s\n", printf(format, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, nbr));
//
//	format = "|%.*d|";
//	printf(" - %d|%s\n", printf(format, precision, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, precision, nbr));
//
//	format = "|%.*d|";
//	printf(" - %d|%s\n", printf(format, -precision, nbr), format);
//	printf(" - %d\n\n", ft_printf(format, -precision, nbr));
//
//	format = "|%10.4d|";
//	printf(" - %d|%s\n", printf(format, 11), format);
//	printf(" - %d\n\n", ft_printf(format, 11));


//	printf(" - %d\n", printf("%.p", NULL));
//	printf(" - %d\n\n", ft_printf("%.p", NULL));

//	static char	a01;
//	static unsigned char a02;
//	static short a03;
//	static unsigned short a04;
//	static int a05;
//	static unsigned int a06;
//	static long a07;
//	static unsigned long a08;
//	static long long a09;
//	static unsigned long long a10;
//	static char *a11;
//	static void *a12;
//
//	printf("%p%p%p%p%p%p%p%p%p%p%p%p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
//	ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


//	printf("%s\n", "Specificator -  p");
//	format = "|%-0*.*p|";
//	printf(" - %d|%s\n", printf(format, width, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, str));
//
//	format = "|%0*.*p|";
//	printf(" - %d|%s\n", printf(format, width, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, str));
//
//	format = "|%*.*p|";
//	printf(" - %d|%s\n", printf(format, width, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, precision, str));
//
//	format = "|%*.p|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%0*.0s|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%-*p|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%*p|";
//	printf(" - %d|%s\n", printf(format, width, str), format);
//	printf(" - %d\n\n", ft_printf(format, width, str));
//
//	format = "|%p|";
//	printf(" - %d|%s\n", printf(format, str), format);
//	printf(" - %d\n\n", ft_printf(format, str));
//
//	format = "|%.*p|";
//	printf(" - %d|%s\n", printf(format, precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, precision, str));
//
//	format = "|%.*p|";
//	printf(" - %d|%s\n", printf(format, -precision, str), format);
//	printf(" - %d\n\n", ft_printf(format, -precision, str));





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
	printf("|%.05d|%7d\n", 54, 5);
	ft_printf("|%.05d|%7d\n", 54, 5);



	return(0);
}