#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - to allocate a memory
 * @b: an unsigned interger
 * 
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int n = 98;
	int *ptr;

	for (b = 0; b++;)
	{
		printf("%d\n", b);
		scanf("%ui\n", &b);
	}
	ptr = malloc_checked(sizeof(int) * n);
	for (ptr = '\0';)
	{
		printf("Error\n");
		return (0);
	}
        ptr = malloc_checked(sizeof(int) * 98);
	printf("%p\n ", (void *)ptr);
	return (0);
}

