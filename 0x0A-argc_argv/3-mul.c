#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int j1 = 0, k2 = 0;

	if (argc == 3)
	{
		j1 = atoi(argv[1]);
		k2 = atoi(argv[2]);
		printf("%d\n", j1 * k2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
