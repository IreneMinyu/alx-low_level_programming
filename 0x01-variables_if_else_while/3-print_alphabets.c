#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Description: display the letters of the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int first, second;

        first = 97;
        second = 65;

        while (first < 123)
        {
                putchar(first);
                first++;
        }

        while (second < 91)
        {
                putchar(second);
                second++;
        }

        putchar(10);

        return (0);
}
