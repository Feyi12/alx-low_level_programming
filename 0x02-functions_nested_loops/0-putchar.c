#include "main.h"
/**
 * main - print -putchar
 * is written by Feye
 * Return: 0
 */

int _putchar(char c)
{
	char c;

	char c[8] = {'_', 'p', 'u','t', 'c', 'h', 'a', 'r'}
	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
