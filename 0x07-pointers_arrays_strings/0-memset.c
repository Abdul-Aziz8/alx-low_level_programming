#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @*s: A pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of the bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i;
	if (n > 0)
	{
		for (i = 0; i < 98; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}

