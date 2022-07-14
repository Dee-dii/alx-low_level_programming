#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, f = 0;

	while (*(dest + d) != '\0')
	{
		d++;
	}

	while (f < n)
	{
		*(dest + d) = *(src + f);
		if (*(src + f) == '\0')
			break;
		d++;
		f++;
	}
	return (dest);
}
