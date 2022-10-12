#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print alphabet
 *@name:char
 *@f:char
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
