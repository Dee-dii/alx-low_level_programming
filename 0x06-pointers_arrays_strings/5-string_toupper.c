#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int d = 0;

	while (*(s + d) != '\0')
	{
		if ((*(s + d) >= 97) && (*(s + d) <= 122))
			*(s + d) = *(s + d) - 32;
		d++;
	}

	return (s);
}
