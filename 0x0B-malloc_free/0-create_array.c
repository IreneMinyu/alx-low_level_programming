#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: stores char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *character;
	unsigned int i;

	if (size == 0)
		return (NULL);

	character = malloc(sizeof(c) * size);

	if (character == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		character[i] = c;

	return (character);
}
