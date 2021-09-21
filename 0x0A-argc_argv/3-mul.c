#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiples of two numbers
 * @argc: number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}

