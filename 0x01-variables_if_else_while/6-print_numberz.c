#include <stdio.h>

/**
 * main - Using putchar to print string of numbers
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
