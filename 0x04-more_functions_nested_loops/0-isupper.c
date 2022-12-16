#include "main.h"
/**
 * int _isupper(int c);
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */ 

 int _isupper(int ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
