#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src
 *
 * @src: copy the string pointed
 * @dest: buffer pointed
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (guard);
}
