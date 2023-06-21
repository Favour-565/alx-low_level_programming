#include <stdio.h>

/**
 * main - Prints the sum of the even-valued Fibonacci numbers
 *        whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib3, sum = 2;

	while (fib2 < 4000000)
	{
		fib3 = fib1 + fib2;

		if (fib3 % 2 == 0)
			sum += fib3;

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("%lu\n", sum);

	return (0);
}
