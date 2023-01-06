#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: is character
 *
 * Return: 1 if it is lowercaser lettere, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
