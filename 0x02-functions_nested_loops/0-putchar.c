#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, len;

	len = sizeof(str) / sizeof(int);

	for (count = 0; count < len; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');	
	return (0);
}
