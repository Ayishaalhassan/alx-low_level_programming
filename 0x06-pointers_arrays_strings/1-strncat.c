#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: input value
 * @dest: input value
 * Return: void
 */
char *_strncat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
