#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print alphabet
 *@separator:char
 *@n:char
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	printf("%i", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%i", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
