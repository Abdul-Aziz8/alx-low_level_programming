#include "main.h"
#include <stdio.h>

/**
 * prints the name of the program
 */
int main(int argc, char *argv[])
{
	int i;
	printf("%d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%s\n",  *argv[i]);
	}
	return (0);
}
