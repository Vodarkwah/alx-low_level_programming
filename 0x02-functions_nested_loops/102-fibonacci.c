#include <stdio.h>

/**
 * main - Prints the Fibonacci numbers to 50.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int num_1, num_2, Fib;

	num_1 = 1;
	num_2 = 2;
	printf("%ld, %ld", num_1, num_2);
	for (c = 0; c < 48; c++)
	{
		Fib = num_1 + num_2;
		printf(", %ld", Fib);
		num_1 = num_2;
		num_2 = Fib;
	}
	printf("\n");
	return (0);
}
