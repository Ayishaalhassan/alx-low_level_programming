#include "main.h"
/**
 * _isupper - check if it is uppercase letters
 * @c: char to check
 * Return: if uppercase return 1, esle return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
