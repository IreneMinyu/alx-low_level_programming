#include "main.h"

/**
 * print_alphabet - main
 * Description: It prints the alphabet in lowercase followed by a new line
 * Return: (0) Success
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
