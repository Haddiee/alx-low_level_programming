#include "main.h"

/**
* main - Prints putchar
*
* Return: End program
*/

int main(void)

{
char string[8] = "_putchar";

	int n = 0;

	while (n < 8)

	{

		int_putchar(string[n]);

		++n;

	}

	int_putchar(10);

	return (0);

}
