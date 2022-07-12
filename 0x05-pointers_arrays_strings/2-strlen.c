#include "main.h"

/**
 * _strlen -. function to get the length of a string
 * @s: string pointer to passed to this function
 * Return: return length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}

