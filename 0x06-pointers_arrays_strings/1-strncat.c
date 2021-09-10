#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings.
 * @*dest: destination string
 * @*src: source string
 * @n: size_t
 * Return the pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
        int i, j;
	 
	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0' && j < n; j++);
	{	
		dest[i + j] = src[j];
	}	
		dest[i + j] = '\0';

	return (dest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);
	return (0);
}
