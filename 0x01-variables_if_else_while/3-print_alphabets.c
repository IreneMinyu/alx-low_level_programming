#include <stdio.h>




/**

 * main - program that prints the alphabet in lowercase and then in uppercase

 *

 * Description: print the letters of the alphabet in lower then in uppercase

 *

 * Return: Always 0 (Success)

 */




int main(void)

{

	int lowercase, uppercase;




	lowercase = 97;

	uppercase = 65;




	while (lowercase < 123)

	{

		putchar(lowercase);

		lowercase++;

	}




	while (uppercase < 91)

	{

		putchar(uppercase);

		uppercase++;

	}




	putchar(10);




	return (0);

}
