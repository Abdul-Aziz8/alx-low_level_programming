#include <stdio.h>

/** 
 * main - prints the size of various types on the computer.
 *
 * Return. Always 0.
 */
int main(void)
{
	int n;
	char c;
	long long int li;
	float f;

	for (n = sizeof (int))
	printf("%d\n", n);

	for (c = sizeof (char))
		printf("%d\n", c);

	for (li = sizeof (long long int))
		printf("%lld\n", li);

	for (f = sizeof (float))
		printf("%f\n", f);
	return (0);
}


