#include "main.h"

/**
 * main - Lowercase alphabets
 * print alphabet - lowercase letter
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lletter;

	for (lletter = 'a'; lletter <= 'z'; lletter++)
	{
		_putchar(lletter);
	}

	_putchar('\n');
}
