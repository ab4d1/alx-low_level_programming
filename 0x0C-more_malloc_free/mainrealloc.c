#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;
    int old_size = 11;
    int new_size = 31;

    p = malloc(sizeof(char) * old_size);
    i = 0;
    while (i < old_size)
    {
        p[i++] = old_size;
    }
    simple_print_buffer(p, old_size);
    p = realloc(p, sizeof(char) * new_size);
    simple_print_buffer(p, new_size);
    i = 0;
    while (i < new_size)
    {
        p[i++] = new_size;
    }
    simple_print_buffer(p, new_size);
    free(p);
    return (0);
}