#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: the size to allocate
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
       	void *ptr = malloc(b);
	
	if (ptr == NULL)
	{
		putchar('!');
		exit(98);
	}
	return ptr;
}
