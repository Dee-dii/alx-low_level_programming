#include <stdio.h>

/**
 * main - prints alphabets in both upper and lower cases
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(ALP[j]);
	}
	putchar('\n');
	return (0);
}
