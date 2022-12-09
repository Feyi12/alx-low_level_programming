#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexd;

	for (hexd = '0'; hexd <= '9'; hexd++)
	{
		putchar(hexd);
	}
	for (hexd = 'a'; hexd <= 'f'; hexd++)
	{
		putchar(hexd);
	}
	putchar('\n');
	return (0);
}
