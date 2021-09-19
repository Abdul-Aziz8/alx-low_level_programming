#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments in the program
 * @argv: an array containing the program command line argument
 *
 * Return: Success.
 */
int main(int argc, char *argv[])
{
	int counter;
	printf("%s", argv[0]);
	if (argc == 1)
		printf("\n");
			if (argc > 2)
			{
				printf("\nNumber of arguments passed: %d", argc);
				printf("\n");
				for (counter = 0; counter < argc; counter++)
					printf("\n argv[%d]:  %s", counter, argv[counter]);
			}
	return (0);
}
