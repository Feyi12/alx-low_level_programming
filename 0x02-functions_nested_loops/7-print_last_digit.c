#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *@m: number's last digit result
 * Return : last digit of a number
 */
int print_last_digit(int m)
{
	m = (m % 10);

	if (m < 0)
	{
		m = (-1 * m);
	}

	_putchar (m + '0');
	return (m);
}


