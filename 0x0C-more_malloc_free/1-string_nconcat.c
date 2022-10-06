#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - print alphabet
 *@s1:size
 *@s2:char
 *@n:char
 * Return:void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (strlen(s2) < n)
		n = strlen(s2);

	cat = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		cat[i] = s1[i];
	}
	for (i = strlen(s1); i < strlen(s1) + n; i++)
	{
		cat[i] = s2[i - strlen(s1)];
	}
	cat[i] = '\0';
	return (cat);
}
