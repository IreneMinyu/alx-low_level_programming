#include "main.h"

/**
 * jack_bauer - Check main
 * Description: prints every minute in a day
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int Hours, Minutes;

	for (Hours = 0; Hours < 24; Hours++)
	{
		for (Minutes = 0; Minutes < 60; Minutes++)
		{
			_putchar((Hours / 10) + '0');
			_putchar((Hours % 10) + '0');
			_putchar(':');
			_putchar((Minutes / 10) + '0');
			_putchar((Minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
