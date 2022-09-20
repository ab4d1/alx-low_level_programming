#include "main.h"

/**
 * _rand - _rand
 *@n:int
 *Return:rand
 */

unsigned long int _rand(unsigned long int next)
{
    next = next * 1103515245 + 12345;
    next = ((unsigned)(next/65536) % 32768);
}

/**
 * main - main
 *@s: pointer to int
 * Return: print
 */

int main(void)
{
	unsigned long int next = 1;
	char pass[30];
	int i = 0;

	for (i = 0; i < 30; i++)
	{
		pass[i] = ' ' + _rand(next) % 100;
		next++;
	}

	return (0);
}
