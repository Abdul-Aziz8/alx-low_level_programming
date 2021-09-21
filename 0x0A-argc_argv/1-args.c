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
       printf("%s\n", argv[0]);
       if (argc < 2)
       {
	      printf("\n");
       }
       else
       {
	       printf("%s\n", argv[1]);
       }
	return (0);
}
