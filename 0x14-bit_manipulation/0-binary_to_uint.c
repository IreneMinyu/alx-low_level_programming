#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int.
 * @b : pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number or NULL if not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index;

	if (!b)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		num <<= 1;
		if (b[index] == '1')
			num += 1;
	}

	return (num);
}
