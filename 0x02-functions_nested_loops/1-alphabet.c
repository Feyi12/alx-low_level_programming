#include "main.h"

/**
 * main - Lowercase alphabets
 * print_alphabet - funtion that print lowercase letter only
 *
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
