#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of argument in the program
 * @argv: an array containing the argument
 *
 * Return: success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",  argv[argc - 1]);
	}
	return (0);
}
