#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table n to use
 * Return: times table
 */
void print_times_table(int n)
{
	int num, table, product;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (table = 1; table <= n; table++)
			{
				product = num * table;
				_putchar(44);
				_putchar(32);
				if (product <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(product + 48);
				}
				else if (product <= 99)
				{
					_putchar(32);
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
				}
				else
				{
					_putchar(((product / 100) % 10) + 48);
					_putchar(((product / 10) % 10) + 48);
					_putchar((product % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
