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

	printf("Size of a char: ", sizeof(ch), " byte(s)\n",
		"Size of an int: ", sizeof(in), " byte(s)\n",
		"Size of a long int: ", sizeof(ln), " byte(s)\n",
		"Size of a long long int: ", sizeof(lln), " byte(s)\n",
		"Size of a float: ", sizeof(fl), " byte(s)\n");
	return (0);
}

