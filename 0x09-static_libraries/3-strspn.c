#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, output, status;

	output = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		status = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				output++;
				status = 1;
			}
		}
		if (status == 0)
		{
			return (output);
		}
	}
	return (output);
}
