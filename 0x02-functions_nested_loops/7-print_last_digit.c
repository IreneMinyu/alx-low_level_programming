#include "main.h"

/**
 * print_last_digit - Check main
 * @n: A number input
 * Description: prints last digit of number
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		_putchar(-digit + 48);
		return (-digit);
	}
	else
	{
		_putchar(digit + 48);
		return (digit);
	}
}
