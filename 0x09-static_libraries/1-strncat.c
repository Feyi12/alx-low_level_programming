#include "main.h"
/**
 * *_strncat - function that concatenate two strings
 * @dest: destination of files
 * @src: source of files
 * @n: input
 * Return: destination file
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
			if (src[k] == '\0')
			{
				k = n;
			}

	}
	return (dest);
}

