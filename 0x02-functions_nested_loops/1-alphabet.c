#include "main.h"

/**
 * main - Lowercase alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
