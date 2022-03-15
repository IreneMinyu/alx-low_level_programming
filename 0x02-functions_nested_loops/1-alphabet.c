#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
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
