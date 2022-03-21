#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int num1 = 0, num2 = 0;
	time_t time;

	srand((unsigned int) time(&time));
	while (num2 < 2772)
	{
		num1 = rand() % 128;
		if ((num2 + num11) > 2772)
			break;
		num2 = num2 + num1;
		printf("%c", num1);
	}
	printf("%c\n", (2772 - num2));
	return (0);
}
