#include<stdio.h>

/**
 * main - Entry point
 *
 * prints some lines
 *
 * Return: Always(0)
 *
 */

int main(void)
{
	char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fputs(string, stdout);
	return (0);
}
