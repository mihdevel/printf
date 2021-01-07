#include <stdio.h>

int 	main(void)
{
	char *format = "%*.*s";
	printf(format, 3, 3, "12");

	return (0);
}
