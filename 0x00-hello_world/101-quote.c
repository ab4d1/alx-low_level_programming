#include<stdio.h>

/**
 * makeItSo - Print string
 * @str: string
 * Return: no return
 */

void makeItSo(char *str)
{
	if (*str == '\0')
		return;
	makeItSo(str + 1);
	putchar(*str);
}

/**
 * main - Entry point
 * prints some lines
 * Return: Always(1)
 *
 */

int main(void)
{
	makeItSo("\n91-01-5102 ,raproK aroD - \"lufesu si tra fo eceip taht dna");
	return (1);
}
