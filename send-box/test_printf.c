#include <stdio.h>

int 	main(void)
{
	char *format = "|%*.*s|";
	printf(format, 10, 3, "Hello");

	return (0);
}
