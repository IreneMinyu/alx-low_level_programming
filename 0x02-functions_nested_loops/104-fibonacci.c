#include <stdio.h>

/**
 * main - Prints the first ninety eight Fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count, boolean1, boolean2;
	long int num1, num2, fibonacci, fibonacci2, num11, num22;

	num1 = 1;
	num2 = 2;
	boolean1 =  boolean2 = 1;
	printf("%ld, %ld", num1, num2);
	for (count = 0; count < 96; count++)
	{
		if (boolean1)
		{
			fibonacci = num1 + num2;
			printf(", %ld", fibonacci);
			num1 = num2;
			num2 = fibonacci;
		}
		else
		{
			if (boolean2)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean2 = 0;
			}
			fibonacci2 = (num11 + num22);
			fibonacci = num1 + num2 + (fibonacci2 / 1000000000);
			printf(", %ld", fibonacci);
			printf("%ld", fibonacci2 % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = fibonacci;
			num22 = (fibonacci2 % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean1 == 1)
			boolean1 = 0;
	}
	printf("\n");
	return (0);
}
