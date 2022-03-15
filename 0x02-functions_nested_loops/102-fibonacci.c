#include <stdio.h>

/**
 * main - Prints the first fifty Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	long int num1, num2, fibonacci;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (count = 0; count < 48; count++)
	{
		fibonacci = num1 + num2;
		printf(", %ld", fibonacci);
		num1 = num2;
		num2 = fibonacci;
	}
	printf("\n");
	return (0);
}
