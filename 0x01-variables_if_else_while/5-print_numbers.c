#include <stdio.h>

/**
 * main - prints all base 10 single didits
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
