#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first characters
 * @str: charater of string
 * Return: character of string
 */

void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
		{
			_putchar([n]);
		}
		else
		{	
			continue;
		}
	}
	_putchar('\n');
}
