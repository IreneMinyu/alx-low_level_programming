#include "main.h"

/**
 * times_table - Check main
 * Description: prints table 9 starting from 0
 * Return: Nothing.
 */
void times_table(void)
{
	int count, table, product;

	for (count = 0; count <= 9; count++)
	{
		_putchar(48);
		for (table = 1; table <= 9; table++)
		{
			product = count * table;
			_putchar(44);
			_putchar(32);
			if (product <= 9)
			{
				_putchar(32);
				_putchar(product + 48);
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
