#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: alphabet only
 * Return: Alphabets
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
