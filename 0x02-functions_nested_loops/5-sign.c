#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: input number
 * Return: sign of number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
