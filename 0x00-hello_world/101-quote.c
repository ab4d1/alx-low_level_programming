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
	makeItSo("\n91-01-5102 ,raproK aroD - \"lufesu si tra fo eceip taht dna");
	return (0);
}
