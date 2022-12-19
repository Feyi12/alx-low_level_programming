#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string input
 *
 * Return: second half of a string
 */

void puts_half(char *str)
{
	int count = 0;
	int n, m;

	str =  " ";
	for (n = 0; str[n] != '\0'; n++)
	{
		count++;

		m = (count / 2);
		if ((count % 2) == 1)
		{
			m = ((count + 1) / 2);
		}
	}
	for (n = m; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
