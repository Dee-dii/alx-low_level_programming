#include "main.h"

/**
 * _islower - checks for lowercase character
 * lower prints 1, other prints 0
 *
 * Return: 1 for lowercase (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
