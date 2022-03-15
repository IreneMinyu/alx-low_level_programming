#include "main.h"

/**
 * print_alphabet_x10 - main
 * description: use _putchar to display
 * alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count, letter2;

	for (count = 0; count <= 9; count++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
