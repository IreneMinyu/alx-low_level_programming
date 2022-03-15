#include "main.h"

/**
 * main - Prints _putchar.
 * description - prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int text[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int index, size;

	size = sizeof(text) / sizeof(int);
	for (index = 0; index < size; index++)
	{
		_putchar(text[index]);
	}
	_putchar('\n');
	return (0);
}
