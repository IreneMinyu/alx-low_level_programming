#include "main.h"

/**
 * print_sign - main
 * @n: The integer in ASCII code
 * description: print sign of a number
 * Return: 1 and + if greater than 0
 * 0 if equal to 0
 * -1 and - if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
