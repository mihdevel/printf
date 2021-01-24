#include <stdio.h>
//gcc -Wall -Wextra -Werror test_printf.c
int 	main(void)
{
	printf("|%5.9-s|", "hi low");

	return (0);
}
