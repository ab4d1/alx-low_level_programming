#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - print alphabet
 *@a:char
 *@b:char
 * Return:void
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - print alphabet
 *@a:char
 *@b:char
 * Return:void
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - print alphabet
 *@a:char
 *@b:char
 * Return:void
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - print alphabet
 *@a:char
 *@b:char
 * Return:void
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - print alphabet
 *@a:char
 *@b:char
 * Return:void
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
