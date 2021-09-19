#include "main.h"
#include <stdio.h>

/**
 * prints the name of the program
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n",  argv[argc - 1]);
	}
	return 0;
}

