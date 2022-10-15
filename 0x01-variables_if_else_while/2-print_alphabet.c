#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar("\n");
	return (0);
}
