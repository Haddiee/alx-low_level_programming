#include <unistd.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int main(void);
{

	char string[8] = "_putchar";

	int n = 0;



	while (n < 8)

	{

		_putchar(string[n]);

		++n;

	}



	_putchar(10);

	return (0);
{
}
}

