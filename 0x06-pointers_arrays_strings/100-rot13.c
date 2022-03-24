#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @string: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *string)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(string + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(string + count) == alphabet[i])
			{
				*(string + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (string);
}
