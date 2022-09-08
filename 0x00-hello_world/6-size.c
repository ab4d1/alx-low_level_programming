#include<stdio.h>

/**
 * main - Entry point
 *
 * prints size of some text
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;
	int in;
	long int ln;
	long long int ll;
	float fl;

	printf("Size of a char: %li byte(s)\n", sizeof(ch));
	printf("Size of an int: %li byte(s)\n", sizeof(in));
	printf("Size of an int: %li byte(s)\n", sizeof(ln));
	printf("Size of an int: %li byte(s)\n", sizeof(ll));
	printf("Size of an int: %li byte(s)\n", sizeof(fl));

	return (0);
}

