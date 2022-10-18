#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always retuens 0 (success)
 */
int main(void)
{
	int j;

	for (j = 122; j > 96; j--)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
