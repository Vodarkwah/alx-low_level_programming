#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, prime_fac;

	n = 612852475143;
	for (prime_fac = 2; prime_fac <= n; prime_fac++)
	{
		if (n % prime_fac == 0)
		{
			n /= prime_fac;
			prime_fac--;
		}
	}
	printf("%ld\n", prime_fac);
	return (0);
}
