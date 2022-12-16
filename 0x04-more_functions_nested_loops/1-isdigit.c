#include "main.h"

/**
 * _isdigit - function that verifies if a character is digit or not
 * @c: tested character
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '48') && (c <= '57'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
