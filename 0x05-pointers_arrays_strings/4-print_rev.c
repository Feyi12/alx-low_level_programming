#include "main.h"
/**
 * print_rev - function that prints string in reverse
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int counter = 0;
	int i, n;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (n= (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
