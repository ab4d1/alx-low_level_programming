#include<stdio.h>

/**
 * main - Entry point
 *
 * prints some lines
 *
 * Return: Always(0)
 *
 * makeItSo - Print string
 * 	str - string
 * Return: no return
 */

void makeItSo(char *str)
{
	if (*str == '\0')
		return;
	makeItSo(str + 1);
	putchar(*str);
}

int main(void)
{
	makeItSo("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (0);
}
