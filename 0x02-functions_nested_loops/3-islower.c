<<<<<<< HEAD
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
=======
#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
>>>>>>> a3c178e5143747888471503da7cdeeca222c5b65
